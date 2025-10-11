
undefined8 FUN_0055dfe0(long *param_1,int *param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_005614f0(uVar3);
  uVar3 = FUN_005614d0(uVar3);
  uVar6 = 0xffffffff;
  lVar4 = FUN_00413530(uVar3,param_4,uVar2);
  if (lVar4 != 0) {
    iVar1 = FUN_00520820(lVar4);
    if (iVar1 < 1) {
      FUN_00412f00(lVar4);
    }
    else {
      iVar1 = FUN_0040e680(param_4,"RSA");
      if (iVar1 != 0) {
        FUN_00415720(lVar4,"rsa_pkcs1_implicit_rejection","0");
      }
      iVar1 = FUN_00520050(lVar4,0,&local_48,*(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                           (long)**(int **)(param_3 + 0x18));
      if (iVar1 < 1) {
        uVar6 = 0xffffffff;
        FUN_00412f00(lVar4);
      }
      else {
        lVar5 = FUN_0041ad90(local_48,"../crypto/pkcs7/pk7_doit.c",0xb8);
        if (lVar5 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0xbb,"pkcs7_decrypt_rinfo");
          uVar6 = 0xffffffff;
          FUN_0051f8f0(0x21,0xc0100,0);
          FUN_00412f00(lVar4);
        }
        else {
          iVar1 = FUN_00520050(lVar4,lVar5,&local_48,*(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                               (long)**(int **)(param_3 + 0x18));
          if (((iVar1 < 1) || (local_48 == 0)) || ((local_48 != param_5 && (param_5 != 0)))) {
            FUN_0051f420();
            FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0xc4,"pkcs7_decrypt_rinfo");
            FUN_0051f8f0(0x21,0x80006,0);
            FUN_00412f00(lVar4);
            FUN_0041ad60(lVar5,"../crypto/pkcs7/pk7_doit.c",0xd1);
            uVar6 = 0;
          }
          else {
            FUN_0041aef0(*param_1,(long)*param_2,"../crypto/pkcs7/pk7_doit.c",0xca);
            *param_1 = lVar5;
            uVar6 = 1;
            *param_2 = (int)local_48;
            FUN_00412f00(lVar4);
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

