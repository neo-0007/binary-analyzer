
long FUN_006e3d20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0070af10(&DAT_00946380);
  lVar2 = thunk_FUN_007129d0(param_1);
  lVar2 = FUN_006e5b30(&DAT_009463b8,param_1,lVar2 + 1,0,param_2,0,0,0,0,param_3,0);
  FUN_0070b100(&DAT_00946380);
  if (lVar2 == 0) {
    lVar3 = FUN_006e5980(param_2);
    if (lVar3 != 0) {
      lVar4 = thunk_FUN_007129d0(lVar3);
      param_2 = FUN_007101b0(lVar4 + 1);
      if (param_2 == 0) goto LAB_006e3db9;
      thunk_FUN_00713a50(param_2,lVar3,lVar4 + 1);
    }
    uVar1 = FUN_006e6230(param_2,&local_68,&local_60,&local_58,&local_50,&local_48);
    if (uVar1 != 0xffffffff) {
      FUN_0070b2d0(&DAT_00946380);
      lVar2 = thunk_FUN_007129d0(param_1);
      lVar2 = FUN_006e5b30(&DAT_009463b8,param_1,lVar2 + 1,uVar1,local_68,local_58,local_50,local_48
                           ,local_60,param_3,1);
      FUN_0070b100(&DAT_00946380);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) < 1) {
          FUN_006e3fa0(lVar2,param_4);
        }
        if ((*(long *)(lVar2 + 0x10) == 0) && (lVar4 = *(long *)(lVar2 + 0x20), lVar4 != 0)) {
          plVar5 = (long *)(lVar2 + 0x20);
          do {
            if (*(int *)(lVar4 + 8) < 1) {
              FUN_006e3fa0(lVar4,param_4);
              lVar4 = *plVar5;
            }
            if (*(long *)(lVar4 + 0x10) != 0) break;
            lVar4 = plVar5[1];
            plVar5 = plVar5 + 1;
          } while (lVar4 != 0);
        }
        if (lVar3 != 0) {
          FUN_007104f0(param_2);
        }
      }
      if ((uVar1 & 1) != 0) {
        FUN_007104f0(local_48);
      }
    }
  }
  else {
    if (*(int *)(lVar2 + 8) < 1) {
      FUN_006e3fa0(lVar2,param_4);
    }
    if ((*(long *)(lVar2 + 0x10) == 0) && (lVar3 = *(long *)(lVar2 + 0x20), lVar3 != 0)) {
      plVar5 = (long *)(lVar2 + 0x20);
      do {
        if (*(int *)(lVar3 + 8) < 1) {
          FUN_006e3fa0(lVar3,param_4);
          lVar3 = *plVar5;
        }
        if (*(long *)(lVar3 + 0x10) != 0) break;
        lVar3 = plVar5[1];
        plVar5 = plVar5 + 1;
      } while (lVar3 != 0);
    }
  }
LAB_006e3db9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

