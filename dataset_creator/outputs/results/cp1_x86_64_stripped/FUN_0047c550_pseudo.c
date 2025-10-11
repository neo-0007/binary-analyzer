
undefined4 FUN_0047c550(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  uVar6 = 1;
  if (param_2 == 0) goto LAB_0047c610;
  iVar1 = *(int *)(param_1 + 0x2e);
  lVar3 = FUN_004069d0(*param_1,param_2,param_3);
  iVar1 = FUN_005b1f70(*param_1,lVar3,iVar1 != 0x10);
  uVar4 = thunk_FUN_007129d0(param_2);
  if (lVar3 == 0) {
LAB_0047c650:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/dsa_sig.c",0x88,"dsa_setup_md");
    FUN_0051f8f0(0x39,0x7a,"%s could not be fetched",param_2);
    if (iVar1 < 0) goto LAB_0047c6c3;
  }
  else {
    if (-1 < iVar1) {
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        if (*(char *)((long)param_1 + 0x19) != '\0') {
          iVar1 = FUN_0040ab70(lVar3,(long)param_1 + 0x19);
          if (iVar1 == 0) {
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/signature/dsa_sig.c",0x96,"dsa_setup_md");
            FUN_0051f8f0(0x39,0xae,"digest %s != %s",param_2,(long)param_1 + 0x19);
            FUN_00406a50(lVar3);
            uVar6 = 0;
            goto LAB_0047c610;
          }
        }
        uVar6 = 1;
        FUN_00406a50(lVar3);
      }
      else {
        FUN_00406b90(param_1[0x2d]);
        FUN_00406a50(param_1[0x2c]);
        param_1[0x2b] = 0;
        iVar2 = FUN_00546fe0(auStack_78,(long)param_1 + 0x4b,0x100);
        if (((iVar2 != 0) &&
            (iVar1 = FUN_00484950(auStack_78,0xffffffff,param_1[2],iVar1), iVar1 != 0)) &&
           (iVar1 = FUN_00547ad0(auStack_78), iVar1 != 0)) {
          FUN_005472b0(auStack_78,param_1 + 0x2b);
          uVar5 = FUN_00547310(auStack_78);
          param_1[0x2a] = uVar5;
        }
        uVar6 = 1;
        FUN_00547da0(auStack_78);
        param_1[0x2c] = lVar3;
        param_1[0x2d] = 0;
        FUN_0041c470((long)param_1 + 0x19,param_2,0x32);
      }
      goto LAB_0047c610;
    }
    if (lVar3 == 0) goto LAB_0047c650;
LAB_0047c6c3:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/dsa_sig.c",0x8b,"dsa_setup_md");
    FUN_0051f8f0(0x39,0xae,"digest=%s",param_2);
  }
  if (0x31 < uVar4) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/dsa_sig.c",0x8e,"dsa_setup_md");
    FUN_0051f8f0(0x39,0x7a,"%s exceeds name buffer length",param_2);
  }
  uVar6 = 0;
  FUN_00406a50(lVar3);
LAB_0047c610:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

