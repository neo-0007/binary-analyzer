
int FUN_00430570(undefined8 param_1,long param_2,uint param_3,byte *param_4,int param_5,int param_6,
                undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined1 local_148 [256];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_3 < 1 || param_5 < 1) || (param_6 != param_5)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x1a7,"ossl_rsa_padding_check_PKCS1_type_2");
    iVar3 = -1;
    FUN_0051f8f0(4,0xc0103,0);
    goto LAB_00430862;
  }
  lVar7 = FUN_0041ad90((long)param_5,"../crypto/rsa/rsa_pk1.c",0x1ac);
  if (lVar7 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x1ae,"ossl_rsa_padding_check_PKCS1_type_2");
    iVar3 = -1;
    FUN_0051f8f0(4,0xc0100,0);
    goto LAB_00430862;
  }
  iVar3 = FUN_0042fa20(param_1,lVar7,param_5,"message",7,param_7,param_5 * 8 & 0xffff);
  if (iVar3 < 0) {
LAB_00430820:
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x20b,"ossl_rsa_padding_check_PKCS1_type_2");
    iVar3 = -1;
    FUN_0051f8f0(4,0xc0103,0);
  }
  else {
    puVar9 = local_148;
    iVar3 = FUN_0042fa20(param_1,puVar9,0x100,"length",6,param_7);
    if (iVar3 < 0) goto LAB_00430820;
    uVar12 = param_5 - 10;
    uVar4 = uVar12 >> 1 & 0x7fff | uVar12;
    uVar4 = uVar4 >> 2 & 0x3fff | uVar4;
    uVar4 = uVar4 >> 4 & 0xfff | uVar4;
    uVar8 = 0;
    do {
      uVar2 = *puVar9;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 2;
      uVar10 = (uint)CONCAT11(uVar2,*puVar1) & (uVar4 >> 8 & 0xff | uVar4);
      uVar5 = (int)((uVar10 - (uVar12 & 0xffff) ^ uVar12 & 0xffff | (uVar10 ^ uVar12) & 0xffff) ^
                   uVar10) >> 0x1f;
      uVar8 = ~uVar5 & uVar8 | uVar10 & uVar5;
    } while (local_48 != puVar9);
    if (param_5 < 3) {
      uVar5 = 0xffffffff;
      uVar4 = 1;
      uVar12 = 0;
    }
    else {
      lVar11 = 2;
      uVar12 = 0;
      uVar4 = 0;
      do {
        uVar10 = (int)(~(uint)param_4[lVar11] & param_4[lVar11] - 1) >> 0x1f;
        uVar5 = ~uVar4 & uVar10;
        uVar4 = uVar4 | uVar10;
        uVar10 = (uint)lVar11;
        lVar11 = lVar11 + 1;
        uVar12 = uVar5 & uVar10 | ~uVar5 & uVar12;
      } while (param_5 != lVar11);
      uVar4 = uVar12 + 1;
      uVar5 = param_6 - uVar4;
      uVar12 = ~((int)((param_3 - uVar5 ^ uVar5 | uVar5 ^ param_3) ^ param_3) >> 0x1f) &
               ~((int)(uVar12 ^ (uVar12 - 10 ^ 10 | uVar12 ^ 10)) >> 0x1f) &
               (int)(~(uint)*param_4 & *param_4 - 1 & (param_4[1] ^ 2) - 1 & ~(uint)(param_4[1] ^ 2)
                    ) >> 0x1f;
      uVar5 = ~uVar12;
    }
    uVar4 = uVar12 & uVar4 | param_5 - uVar8 & uVar5;
    if ((int)uVar4 < param_5) {
      lVar11 = (long)(int)(uVar4 + 1);
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        iVar6 = (int)lVar11;
        *(byte *)((param_2 - (int)uVar4) + -1 + lVar11) =
             param_4[lVar11 + -1] & (byte)uVar12 | *(byte *)(lVar7 + -1 + lVar11) & ~(byte)uVar12;
        lVar11 = lVar11 + 1;
      } while (iVar6 < param_5 && iVar3 < (int)param_3);
    }
    else {
      iVar3 = 0;
    }
  }
  FUN_0041ad60(lVar7,"../crypto/rsa/rsa_pk1.c",0x20c);
LAB_00430862:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

