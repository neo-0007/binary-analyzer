
long * FUN_00673e50(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  char local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00672120(&local_21,param_1,0);
  if (local_21 != '\0') {
    plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    puVar3 = (undefined1 *)plVar2[2];
    if (puVar3 < (undefined1 *)plVar2[3]) {
      uVar1 = *puVar3;
      plVar2[2] = (long)(puVar3 + 1);
      *param_2 = uVar1;
    }
    else {
                    /* try { // try from 00673edb to 00673edd has its CatchHandler @ 00673f06 */
      iVar4 = (**(code **)(*plVar2 + 0x50))();
      if (iVar4 == -1) {
        lVar5 = *(long *)(*param_1 + -0x18) + (long)param_1;
        FUN_0066ec40(lVar5,*(uint *)(lVar5 + 0x20) | 6);
      }
      else {
        *param_2 = (char)iVar4;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

