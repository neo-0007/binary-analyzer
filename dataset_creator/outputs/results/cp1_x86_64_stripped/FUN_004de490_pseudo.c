
undefined8
FUN_004de490(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,ulong param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_31 = 0;
  local_39 = 0x3834346445676953;
  if (param_5 < 0x100) {
    local_3b = param_3 != '\0';
    local_3a = (char)param_5;
    lVar2 = FUN_004069d0(param_1,"SHAKE256",param_6);
    if (lVar2 != 0) {
      iVar1 = FUN_00407430(param_2,lVar2,0);
      if (iVar1 != 0) {
        iVar1 = FUN_00405f60(param_2,&local_39,8);
        if (iVar1 != 0) {
          iVar1 = FUN_00405f60(param_2,&local_3b,2);
          if (iVar1 != 0) {
            iVar1 = FUN_00405f60(param_2,param_4,param_5);
            if (iVar1 != 0) {
              FUN_00406a50(lVar2);
              uVar3 = 0xffffffff;
              goto LAB_004de523;
            }
          }
        }
      }
      FUN_00406a50(lVar2);
    }
  }
  uVar3 = 0;
LAB_004de523:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

