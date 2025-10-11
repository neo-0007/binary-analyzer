
undefined4 FUN_00561840(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_44;
  long *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = thunk_FUN_0049f880(*param_1,1);
  if (iVar3 != 0) {
    uVar5 = FUN_0059e6c0(param_2);
    iVar3 = FUN_005ad820(param_1[1],uVar5);
    if (iVar3 != 0) {
      thunk_FUN_004a2270(*(undefined8 *)(param_1[1] + 8));
      uVar5 = FUN_0059e6f0(param_2);
      lVar1 = param_1[1];
      lVar6 = thunk_FUN_004a22a0(uVar5);
      *(long *)(lVar1 + 8) = lVar6;
      if (lVar6 != 0) {
        FUN_0040ed80(param_3);
        param_1[7] = param_3;
        uVar4 = FUN_0040aaf0(param_4);
        uVar5 = FUN_004239c0(uVar4);
        FUN_004a8880(param_1[2],uVar5,5,0);
        iVar3 = FUN_0040e680(param_3,&DAT_00830570);
        if (iVar3 == 0) {
          iVar3 = FUN_0040e680(param_3,"DSA");
          if (iVar3 == 0) {
            iVar3 = FUN_0040e680(param_3,"RSA");
            if (iVar3 == 0) {
              uVar4 = 0;
              if ((*(long *)(param_3 + 8) != 0) &&
                 (pcVar2 = *(code **)(*(long *)(param_3 + 8) + 0xb0), pcVar2 != (code *)0x0)) {
                iVar3 = (*pcVar2)(param_3,1,0,param_1);
                if (0 < iVar3) goto LAB_00561a98;
                if (iVar3 != -2) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x17a,"PKCS7_SIGNER_INFO_set");
                  FUN_0051f8f0(0x21,0x93,0);
                  goto LAB_0056187f;
                }
              }
              FUN_0051f420();
              FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x17e,"PKCS7_SIGNER_INFO_set");
              FUN_0051f8f0(0x21,0x94,0);
            }
            else {
              local_38 = 0;
              FUN_00561810(param_1,0,0,&local_38);
              if (local_38 != 0) {
                uVar5 = FUN_004239c0(6);
                FUN_004a8880(local_38,uVar5,5,0);
              }
LAB_00561a98:
              uVar4 = 1;
            }
            goto LAB_0056187f;
          }
        }
        uVar5 = param_1[7];
        FUN_00561810(param_1,0,&local_40,&local_38);
        if ((local_40 != (long *)0x0) && (*local_40 != 0)) {
          iVar3 = FUN_00423da0();
          if (iVar3 != 0) {
            uVar4 = FUN_0040e580(uVar5);
            iVar3 = FUN_00424d10(&local_44,iVar3,uVar4);
            if (iVar3 != 0) {
              uVar4 = 1;
              uVar5 = FUN_004239c0(local_44);
              FUN_004a8880(local_38,uVar5,0xffffffff,0);
              goto LAB_0056187f;
            }
          }
        }
        uVar4 = 0xffffffff;
        goto LAB_0056187f;
      }
    }
  }
  uVar4 = 0;
LAB_0056187f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

