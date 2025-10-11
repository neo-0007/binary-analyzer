
undefined4 FUN_00561cc0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = thunk_FUN_0049f880(*param_1,0);
  if (iVar2 != 0) {
    uVar3 = FUN_0059e6c0(param_2);
    iVar2 = FUN_005ad820(param_1[1],uVar3);
    if (iVar2 != 0) {
      thunk_FUN_004a2270(*(undefined8 *)(param_1[1] + 8));
      uVar3 = FUN_0059e6f0(param_2);
      lVar5 = param_1[1];
      lVar4 = thunk_FUN_004a22a0(uVar3);
      *(long *)(lVar5 + 8) = lVar4;
      if (lVar4 != 0) {
        lVar5 = FUN_0059ef80(param_2);
        if (lVar5 != 0) {
          iVar2 = FUN_0040e680(lVar5,"RSA-PSS");
          if (iVar2 != 0) {
            uVar6 = 0xfffffffe;
            goto LAB_00561cf5;
          }
          iVar2 = FUN_0040e680(lVar5,"RSA");
          if (iVar2 == 0) {
            uVar6 = 0;
            if ((*(long *)(lVar5 + 8) == 0) ||
               (pcVar1 = *(code **)(*(long *)(lVar5 + 8) + 0xb0), pcVar1 == (code *)0x0)) {
              FUN_0051f420();
              uVar3 = 0x285;
            }
            else {
              iVar2 = (*pcVar1)(lVar5,2,0,param_1);
              if (iVar2 != -2) {
                if (iVar2 < 1) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x291,"PKCS7_RECIP_INFO_set");
                  FUN_0051f8f0(0x21,0x95,0);
                  goto LAB_00561cf5;
                }
                goto LAB_00561de1;
              }
              FUN_0051f420();
              uVar3 = 0x28c;
            }
            FUN_0051f540("../crypto/pkcs7/pk7_lib.c",uVar3,"PKCS7_RECIP_INFO_set");
            FUN_0051f8f0(0x21,0x96,0);
          }
          else {
            local_38 = 0;
            FUN_00561c00(param_1,&local_38);
            if (local_38 != 0) {
              uVar3 = FUN_004239c0(6);
              FUN_004a8880(local_38,uVar3,5,0);
            }
LAB_00561de1:
            uVar6 = 1;
            FUN_005a1b20(param_2);
            param_1[4] = param_2;
          }
          goto LAB_00561cf5;
        }
      }
    }
  }
  uVar6 = 0;
LAB_00561cf5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

