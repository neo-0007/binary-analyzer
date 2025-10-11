
undefined4 FUN_0056a0a0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  uVar6 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  iVar1 = FUN_00423da0(*param_2);
  if (iVar1 == 0x390) {
    uVar3 = FUN_0042b160(param_2);
    iVar1 = FUN_00569d50(uVar3,&local_28,&local_30,&local_34);
    if (iVar1 == 0) {
      FUN_0056a4a0(uVar3);
      uVar6 = 0;
    }
    else {
      iVar1 = FUN_0040aaf0(local_28);
      if (iVar1 - 0x2a0U < 3) {
        iVar4 = FUN_0040aaf0(local_30);
        cVar5 = '\0';
        if (iVar4 == iVar1) {
          iVar4 = FUN_0040ac10(local_28);
          cVar5 = (local_34 == iVar4) * '\x02';
        }
        iVar4 = FUN_0040ac10(local_28);
        iVar4 = iVar4 * 4;
      }
      else {
        iVar2 = FUN_0040ac10(local_28);
        if (iVar1 == 0x40) {
          iVar4 = 0x40;
          cVar5 = '\0';
        }
        else {
          cVar5 = '\0';
          iVar4 = 0x44;
          if (iVar1 != 0x72) {
            if (iVar1 == 4) {
              iVar4 = 0x27;
            }
            else {
              iVar4 = iVar2 * 4;
            }
          }
        }
      }
      uVar6 = 1;
      FUN_005a1c40(param_1,iVar1,0x390,iVar4,cVar5);
      FUN_0056a4a0(uVar3);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

