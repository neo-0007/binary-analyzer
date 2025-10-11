
int o2i_SCT_signature(int *param_1,long *param_2,ulong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (*param_1 == 0) {
    if (param_3 < 5) {
      ERR_new();
      uVar6 = 0x2a;
    }
    else {
      puVar1 = (undefined1 *)*param_2;
      *(undefined1 *)(param_1 + 0x10) = *puVar1;
      *(undefined1 *)((long)param_1 + 0x41) = puVar1[1];
      iVar2 = SCT_get_signature_nid();
      if (iVar2 == 0) {
        ERR_new();
        uVar6 = 0x33;
      }
      else {
        puVar3 = puVar1 + 4;
        uVar4 = *(ushort *)(puVar1 + 2) << 8 | *(ushort *)(puVar1 + 2) >> 8;
        uVar7 = param_3 - ((long)puVar3 - *param_2);
        uVar5 = (ulong)uVar4;
        if (uVar5 <= uVar7) {
          iVar2 = SCT_set1_signature(param_1,puVar3,uVar5);
          if (iVar2 == 1) {
            *param_2 = (long)(puVar3 + uVar5);
            return (int)param_3 - ((int)uVar7 - (uint)uVar4);
          }
          return -1;
        }
        ERR_new();
        uVar6 = 0x3a;
      }
    }
    ERR_set_debug("../crypto/ct/ct_oct.c",uVar6,"o2i_SCT_signature");
    ERR_set_error(0x32,0x6b,0);
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_oct.c",0x1f,"o2i_SCT_signature");
    ERR_set_error(0x32,0x67,0);
  }
  return -1;
}

