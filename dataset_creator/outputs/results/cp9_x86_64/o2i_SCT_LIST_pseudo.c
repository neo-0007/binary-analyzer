
long o2i_SCT_LIST(long *param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_3 - 2U < 0xfffe) {
    uVar1 = *(ushort *)*param_2;
    *param_2 = (ushort *)*param_2 + 1;
    uVar6 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if (param_3 - 2U == uVar6) {
      if ((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
        lVar3 = OPENSSL_sk_new_null();
        if (lVar3 == 0) {
          return 0;
        }
      }
      else {
        while (lVar4 = OPENSSL_sk_pop(lVar3), lVar4 != 0) {
          SCT_free();
        }
      }
      do {
        if (uVar6 == 0) {
          if (param_1 == (long *)0x0) {
            return lVar3;
          }
          if (*param_1 == 0) {
            *param_1 = lVar3;
            return lVar3;
          }
          return lVar3;
        }
        if (uVar6 == 1) {
          ERR_new();
          uVar7 = 0x123;
LAB_0061fa11:
          ERR_set_debug("../crypto/ct/ct_oct.c",uVar7,"o2i_SCT_LIST");
          ERR_set_error(0x32,0x69,0);
          goto LAB_0061fa30;
        }
        uVar1 = *(ushort *)*param_2;
        *param_2 = (ushort *)*param_2 + 1;
        uVar5 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
        if ((uVar5 == 0) || (uVar6 - 2 < uVar5)) {
          ERR_new();
          uVar7 = 0x12a;
          goto LAB_0061fa11;
        }
        uVar6 = (uVar6 - 2) - uVar5;
        lVar4 = o2i_SCT(0,param_2);
        if (lVar4 == 0) goto LAB_0061fa30;
        iVar2 = OPENSSL_sk_push(lVar3,lVar4);
      } while (iVar2 != 0);
      SCT_free(lVar4);
LAB_0061fa30:
      if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
        SCT_LIST_free(lVar3);
      }
      return 0;
    }
    ERR_new();
    uVar7 = 0x10e;
  }
  else {
    ERR_new();
    uVar7 = 0x108;
  }
  ERR_set_debug("../crypto/ct/ct_oct.c",uVar7,"o2i_SCT_LIST");
  ERR_set_error(0x32,0x69,0);
  return 0;
}

