
long FUN_0059def0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = thunk_FUN_00712710(param_2,0x3a);
  if (lVar3 == 0) {
    iVar2 = FUN_0059c970(param_1,param_2);
    lVar3 = (ulong)(iVar2 != 0) << 2;
    goto LAB_0059dffa;
  }
  local_40 = 0;
  local_48 = -0x100000000;
  iVar2 = FUN_004cde20(param_2,0x3a,0,FUN_0059ca50,&local_58);
  if (iVar2 != 0) {
    iVar1 = local_48._4_4_;
    iVar2 = (int)local_48;
    if (local_48._4_4_ == -1) {
      if ((int)local_48 == 0x10) {
LAB_0059e045:
        lVar3 = 0x10;
        *param_1 = local_58;
        param_1[1] = uStack_50;
        goto LAB_0059dffa;
      }
    }
    else if (((int)local_48 != 0x10) && (local_40 < 4)) {
      if (local_40 == 3) {
        if ((int)local_48 < 1) {
LAB_0059e06a:
          if (local_48 < 0) goto LAB_0059e045;
          lVar3 = (long)local_48._4_4_;
          thunk_FUN_00713a50(param_1,&local_58,lVar3);
          thunk_FUN_00713720((long)param_1 + lVar3,0,(long)(0x10 - iVar2));
          lVar3 = 0x10;
          if (iVar1 == iVar2) goto LAB_0059dffa;
LAB_0059dfcc:
          thunk_FUN_00713a50((long)param_1 + ((long)iVar1 - (long)iVar2) + 0x10,
                             (long)&local_58 + (long)iVar1,(long)(iVar2 - iVar1));
          lVar3 = 0x10;
          goto LAB_0059dffa;
        }
      }
      else if (local_40 == 2) {
        if ((local_48._4_4_ == (int)local_48) || (local_48._4_4_ == 0)) goto LAB_0059e06a;
      }
      else if ((local_48._4_4_ != 0) && (local_48._4_4_ != (int)local_48)) {
        if (local_48 < 0) goto LAB_0059e045;
        lVar3 = (long)local_48._4_4_;
        thunk_FUN_00713a50(param_1,&local_58,lVar3);
        thunk_FUN_00713720((long)param_1 + lVar3,0,(long)(0x10 - iVar2));
        goto LAB_0059dfcc;
      }
    }
  }
  lVar3 = 0;
LAB_0059dffa:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

