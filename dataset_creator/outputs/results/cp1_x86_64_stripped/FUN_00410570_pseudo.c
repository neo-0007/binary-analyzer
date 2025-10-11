
uint FUN_00410570(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_1;
  local_30 = (int *)0x0;
  if (iVar2 == 0) {
LAB_00410618:
    if (*(long *)(param_1 + 0x18) == 0) {
      if ((*param_2 == 0) || (*(long *)(param_2 + 0x18) != 0)) {
        iVar2 = FUN_0040f410(param_1);
      }
      else {
        iVar2 = FUN_0040f1a0(param_1,*param_2);
      }
      if (iVar2 == 0) goto LAB_00410648;
    }
LAB_004105af:
    iVar2 = FUN_0040dee0(param_2);
    if (iVar2 != 0) {
      FUN_0051f420();
      uVar3 = 0;
      FUN_0051f540("../crypto/evp/p_lib.c",0xa6,"EVP_PKEY_copy_parameters");
      FUN_0051f8f0(6,0x67,0);
      goto LAB_0041064b;
    }
    iVar2 = FUN_0040dee0(param_1);
    if (iVar2 == 0) {
      uVar3 = FUN_00410130(param_1,param_2);
      if (uVar3 != 1) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../crypto/evp/p_lib.c",0xae,"EVP_PKEY_copy_parameters");
        FUN_0051f8f0(6,0x99,0);
      }
      goto LAB_0041064b;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_0053dc40(param_1,param_2,4);
        goto LAB_0041064b;
      }
      if (*(long *)(param_1 + 0x1a) == 0) {
        local_28 = *(long *)(param_1 + 0x18);
        lVar4 = FUN_0040fbe0(param_2,0,&local_28,0);
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/p_lib.c",0xca,"EVP_PKEY_copy_parameters");
          FUN_0051f8f0(6,0x65,0);
          uVar3 = 0;
        }
        else {
          lVar4 = FUN_0053eb90(*(undefined8 *)(param_1 + 0x18),lVar4,4);
          *(long *)(param_1 + 0x1a) = lVar4;
          uVar3 = (uint)(lVar4 != 0);
        }
        goto LAB_0041064b;
      }
    }
    if ((*(long *)(param_2 + 2) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_2 + 2) + 0x88), pcVar1 != (code *)0x0)) {
      uVar3 = (*pcVar1)(param_1,param_2);
      goto LAB_0041064b;
    }
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) goto LAB_004105af;
    if (*(long *)(param_2 + 0x18) != 0) {
      iVar2 = FUN_00410260(&local_30);
      if (iVar2 == 0) goto LAB_00410648;
      iVar2 = *param_1;
      param_2 = local_30;
      if (iVar2 == 0) goto LAB_00410618;
      if (*(long *)(param_1 + 0x18) != 0) goto LAB_004105af;
    }
    if (*param_2 == iVar2) goto LAB_004105af;
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_lib.c",0xa0,"EVP_PKEY_copy_parameters");
    FUN_0051f8f0(6,0x65,0);
  }
LAB_00410648:
  uVar3 = 0;
LAB_0041064b:
  FUN_0040f4f0(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

