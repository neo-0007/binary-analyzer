
undefined8
FUN_00466b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
            ,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_890;
  undefined1 local_888 [64];
  undefined1 local_848 [2056];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00547570(local_888,local_848,0x800,0);
  if (iVar1 != 0) {
    iVar1 = FUN_005477a0(local_888,(undefined4)param_11,2);
    if (iVar1 != 0) {
      iVar1 = FUN_00547650(local_888,1);
      if (iVar1 != 0) {
        iVar1 = FUN_00547c30(local_888,param_4,param_5);
        if (iVar1 != 0) {
          iVar1 = FUN_00547c30(local_888,param_6,param_7);
          if (iVar1 != 0) {
            iVar1 = FUN_00547aa0(local_888);
            if (iVar1 != 0) {
              uVar2 = 0;
              if (param_8 != 0) {
                uVar2 = param_9;
              }
              iVar1 = FUN_00547cc0(local_888,param_8,uVar2,1);
              if (iVar1 != 0) {
                iVar1 = FUN_005472b0(local_888,&local_890);
                if (iVar1 != 0) {
                  iVar1 = FUN_00547ad0(local_888);
                  if (iVar1 != 0) {
                    uVar2 = FUN_00466810(param_1,param_2,param_3,local_848,local_890,param_10,
                                         param_11);
                    goto LAB_00466bf2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00547da0(local_888);
  uVar2 = 0;
LAB_00466bf2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

