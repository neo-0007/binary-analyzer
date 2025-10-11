
int FUN_00544be0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    if (param_2[4] != 0) {
      if ((*(byte *)(param_2 + 8) & 4) == 0) {
        iVar2 = FUN_005449b0();
      }
      else {
        iVar2 = FUN_00544a30();
      }
      goto LAB_00544c35;
    }
    iVar2 = FUN_00544ac0();
    if ((iVar2 != 0) && (lVar4 = FUN_004b2a70(param_1), lVar4 != 0)) {
      iVar3 = FUN_005c4db0(param_2[1],lVar4,0);
      if (iVar3 == 1) {
        iVar3 = FUN_005c4db0(*param_2,lVar4,0);
        if (iVar3 != 1) {
          FUN_0051f420();
          iVar2 = 0;
          FUN_0051f540("../crypto/ffc/ffc_params_validate.c",0xb2,"ossl_ffc_params_full_validate");
          FUN_0051f8f0(10,0x73,0);
        }
      }
      else {
        FUN_0051f420();
        iVar2 = 0;
        FUN_0051f540("../crypto/ffc/ffc_params_validate.c",0xac,"ossl_ffc_params_full_validate");
        FUN_0051f8f0(10,0x71,0);
      }
      FUN_004b2b50(lVar4);
      goto LAB_00544c35;
    }
  }
  iVar2 = 0;
LAB_00544c35:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

