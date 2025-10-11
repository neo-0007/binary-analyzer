
ulong FUN_006d3ec0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  uint local_5c;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_006d5320();
  iVar1 = FUN_006ddc90(param_1,param_2,&local_5c);
  if (iVar1 == 0) {
    uVar3 = (ulong)local_5c;
  }
  else {
    local_58[0] = param_2;
    plVar2 = (long *)FUN_0076f840(local_58,&DAT_009460c0,FUN_006d30c0);
    lVar5 = param_2;
    if ((plVar2 != (long *)0x0) && (lVar5 = *(long *)(*plVar2 + 8), *(long *)(*plVar2 + 8) == 0)) {
      lVar5 = param_2;
    }
    local_58[0] = param_1;
    plVar2 = (long *)FUN_0076f840(local_58,&DAT_009460c0,FUN_006d30c0);
    lVar4 = param_1;
    if ((plVar2 != (long *)0x0) && (lVar4 = *(long *)(*plVar2 + 8), *(long *)(*plVar2 + 8) == 0)) {
      lVar4 = param_1;
    }
    uVar3 = thunk_FUN_00712780(lVar4,lVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

