
long ossl_ecx_key_op(X509_ALGOR *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                    undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  bool bVar11;
  long in_FS_OFFSET;
  byte bVar12;
  int local_44;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 2) {
LAB_00504816:
    bVar11 = param_4 == 0x40a;
    if (param_4 == 0x43f || bVar11) {
      cVar6 = (param_4 != 0x40a) * '\x02';
    }
    else {
      bVar11 = false;
      cVar6 = (param_4 != 0x40b) * '\x02' + '\x01';
    }
    goto LAB_00504845;
  }
  if (param_1 == (X509_ALGOR *)0x0) {
LAB_00504799:
    bVar11 = param_2 == (undefined8 *)0x0 || param_4 == 0;
    if (bVar11) {
LAB_005047d6:
      ERR_new();
      uVar7 = 0xb6;
      goto LAB_005047e7;
    }
    if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
      if (param_3 == 0x20) goto LAB_00504816;
      goto LAB_005047d6;
    }
    if (param_4 == 0x40b) {
      cVar6 = '\x01';
      if (param_3 != 0x38) goto LAB_005047d6;
    }
    else {
      cVar6 = '\x03';
      if (param_3 != 0x39) goto LAB_005047d6;
    }
LAB_00504845:
    lVar2 = ossl_ecx_key_new(param_6,cVar6,1,param_7);
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecx_backend.c",0xbd,"ossl_ecx_key_op");
      ERR_set_error(0x10,0xc0100,0);
      goto LAB_00504875;
    }
    if (param_5 == 0) {
      memcpy((void *)(lVar2 + 0x11),param_2,(long)param_3);
      goto LAB_00504875;
    }
    pbVar3 = (byte *)ossl_ecx_key_allocate_privkey(lVar2);
    if (pbVar3 == (byte *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecx_backend.c",199,"ossl_ecx_key_op");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      if (param_5 == 2) {
        if (param_4 != 0) {
          if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
            uVar7 = 0x20;
LAB_00504a01:
            iVar1 = RAND_priv_bytes_ex(param_6,pbVar3,uVar7,0);
            if (iVar1 < 1) goto LAB_00504951;
            if (bVar11) {
              *pbVar3 = *pbVar3 & 0xf8;
              pbVar3[0x1f] = pbVar3[0x1f] & 0x7f | 0x40;
            }
            else if (param_4 == 0x40b) goto LAB_00504a2d;
          }
          else {
            uVar7 = 0x39;
            if (param_4 != 0x40b) goto LAB_00504a01;
            iVar1 = RAND_priv_bytes_ex(param_6,pbVar3,0x38,0);
            if (iVar1 < 1) goto LAB_00504951;
LAB_00504a2d:
            *pbVar3 = *pbVar3 & 0xfc;
            pbVar3[0x37] = pbVar3[0x37] | 0x80;
          }
        }
      }
      else {
        if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
          lVar4 = 0x20;
        }
        else {
          lVar4 = (ulong)(param_4 != 0x40b) + 0x38;
        }
        *(undefined8 *)pbVar3 = *param_2;
        *(undefined8 *)(pbVar3 + lVar4 + -8) = *(undefined8 *)((long)param_2 + lVar4 + -8);
        lVar10 = (long)pbVar3 - (long)((ulong)(pbVar3 + 8) & 0xfffffffffffffff8);
        puVar8 = (undefined8 *)((long)param_2 - lVar10);
        puVar9 = (undefined8 *)((ulong)(pbVar3 + 8) & 0xfffffffffffffff8);
        for (uVar5 = (ulong)((uint)((int)lVar4 + (int)lVar10) >> 3); uVar5 != 0; uVar5 = uVar5 - 1)
        {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar12 * -2 + 1;
          puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
        }
      }
      iVar1 = ossl_ecx_public_from_private(lVar2);
      if (iVar1 != 0) goto LAB_00504875;
      ERR_new();
      ERR_set_debug("../crypto/ec/ecx_backend.c",0xdb,"ossl_ecx_key_op");
      ERR_set_error(0x10,0xa6,0);
    }
LAB_00504951:
    ossl_ecx_key_free(lVar2);
  }
  else {
    X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,(void **)0x0,param_1);
    if (local_44 == -1) {
      if (param_4 == 0) {
        param_4 = OBJ_obj2nid(param_1->algorithm);
      }
      else {
        iVar1 = OBJ_obj2nid(param_1->algorithm);
        if (iVar1 != param_4) {
          ERR_new();
          uVar7 = 0xb0;
          goto LAB_005047e7;
        }
      }
      goto LAB_00504799;
    }
    ERR_new();
    uVar7 = 0xaa;
LAB_005047e7:
    ERR_set_debug("../crypto/ec/ecx_backend.c",uVar7,"ossl_ecx_key_op");
    ERR_set_error(0x10,0x66,0);
  }
  lVar2 = 0;
LAB_00504875:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar2;
}

