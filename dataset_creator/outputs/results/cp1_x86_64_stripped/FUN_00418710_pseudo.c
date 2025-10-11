
long FUN_00418710(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_54;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00417730(param_1,4,&DAT_008de0a0);
  if (lVar2 != 0) {
    iVar1 = FUN_004182d0(lVar2);
    if (-1 < iVar1) {
      if (iVar1 == 1) {
        FUN_00419fe0(0xc,0);
        FUN_00423200(2,FUN_00418bf0,lVar2);
        FUN_00423200(1,&LAB_00418bb0,lVar2);
        iVar1 = FUN_004a13c0();
        if (0 < iVar1) {
          iVar4 = 0;
          do {
            uVar3 = FUN_004a13f0(iVar4);
            local_54 = 0;
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            FUN_004a1730(&local_54,&local_50,&local_4c,0,&local_48,uVar3);
            if (local_54 != 0) {
              if ((local_4c & 1) == 0) {
                if (local_54 == 0x398) {
                  FUN_00418a60(0,0x398,&PTR_DAT_007ce68d,lVar2);
                }
                FUN_00418a60(0,local_54,local_48);
              }
              else if (local_54 == 0x494) {
                FUN_00418a60(0,0x494,local_48);
              }
              else {
                FUN_00418a60(local_50,local_54,local_48);
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar1 != iVar4);
        }
      }
      goto LAB_0041875c;
    }
  }
  lVar2 = 0;
LAB_0041875c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

