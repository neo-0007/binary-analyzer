
undefined4 FUN_0047d680(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    uVar7 = 1;
    goto LAB_0047d739;
  }
  uVar3 = thunk_FUN_007129d0(param_2);
  if (uVar3 < 0x32) {
    if (param_3 == 0) {
      param_3 = param_1[1];
    }
    lVar4 = FUN_004069d0(*param_1,param_2,param_3);
    if (lVar4 != 0) {
      iVar1 = FUN_005b1f70(*param_1,lVar4,*(int *)(param_1 + 0x2d) != 0x10);
      if (iVar1 < 0) {
        FUN_0051f420();
        uVar7 = 0;
        FUN_0051f540("../providers/implementations/signature/ecdsa_sig.c",0xf4,"ecdsa_setup_md");
        FUN_0051f8f0(0x39,0xae,"digest=%s",param_2);
        FUN_00406a50(lVar4);
      }
      else if ((*(byte *)((long)param_1 + 0x4a) & 1) == 0) {
        if (*(char *)(param_1 + 3) != '\0') {
          iVar1 = FUN_0040ab70(lVar4,param_1 + 3);
          if (iVar1 == 0) {
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/signature/ecdsa_sig.c",0xfc,"ecdsa_setup_md")
            ;
            FUN_0051f8f0(0x39,0xae,"digest %s != %s",param_2,param_1 + 3);
            FUN_00406a50(lVar4);
            uVar7 = 0;
            goto LAB_0047d739;
          }
        }
        uVar7 = 1;
        FUN_00406a50(lVar4);
      }
      else {
        FUN_00406b90(param_1[0x2f]);
        FUN_00406a50(param_1[0x2e]);
        param_1[0x2b] = 0;
        iVar2 = FUN_00546fe0(auStack_68,(long)param_1 + 0x4b,0x100);
        if (iVar2 != 0) {
          iVar1 = FUN_00484af0(auStack_68,0xffffffff,param_1[2],iVar1);
          if (iVar1 != 0) {
            iVar1 = FUN_00547ad0(auStack_68);
            if (iVar1 != 0) {
              FUN_005472b0(auStack_68,param_1 + 0x2b);
              uVar5 = FUN_00547310(auStack_68);
              param_1[0x2a] = uVar5;
            }
          }
        }
        uVar7 = 1;
        FUN_00547da0(auStack_68);
        param_1[0x2e] = lVar4;
        param_1[0x2f] = 0;
        iVar1 = FUN_0040ac10(lVar4);
        param_1[0x2c] = (long)iVar1;
        FUN_0041c470(param_1 + 3,param_2,0x32);
      }
      goto LAB_0047d739;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/ecdsa_sig.c",0xec,"ecdsa_setup_md");
    pcVar6 = "%s could not be fetched";
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/ecdsa_sig.c",0xe4,"ecdsa_setup_md");
    pcVar6 = "%s exceeds name buffer length";
  }
  uVar7 = 0;
  FUN_0051f8f0(0x39,0x7a,pcVar6,param_2);
LAB_0047d739:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

