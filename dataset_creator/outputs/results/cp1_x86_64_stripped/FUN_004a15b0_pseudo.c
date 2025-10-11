
undefined8 FUN_004a15b0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_168 [41];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = local_168;
  for (lVar3 = 0x28; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (*(long *)(param_1 + 4) == 0) {
    if ((*(ulong *)(param_1 + 2) & 1) == 0) goto LAB_004a16a1;
  }
  else if ((*(ulong *)(param_1 + 2) & 1) != 0) {
LAB_004a16a1:
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/ameth_lib.c",0x9e,"EVP_PKEY_asn1_add0");
    FUN_0051f8f0(6,0x80106,0);
    uVar2 = 0;
    goto LAB_004a1638;
  }
  if ((DAT_00940fa8 != 0) || (DAT_00940fa8 = FUN_00436420(&LAB_004a13b0), DAT_00940fa8 != 0)) {
    local_168[0]._0_4_ = *param_1;
    iVar1 = FUN_00435f40(DAT_00940fa8,local_168);
    if (iVar1 < 0) {
      iVar1 = FUN_00435f80(DAT_00940fa8,param_1);
      if (iVar1 != 0) {
        FUN_00436510(DAT_00940fa8);
        uVar2 = 1;
        goto LAB_004a1638;
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/ameth_lib.c",0xaa,"EVP_PKEY_asn1_add0");
      FUN_0051f8f0(6,0xb3,0);
    }
  }
  uVar2 = 0;
LAB_004a1638:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

