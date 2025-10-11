
long * FUN_00673d30(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00625160(auStack_38,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
                    /* try { // try from 00673d6e to 00673d72 has its CatchHandler @ 00673e32 */
  lVar3 = FUN_0067c1e0(auStack_38);
  FUN_00625980(auStack_38);
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  pbVar4 = (byte *)plVar1[2];
  if (pbVar4 < (byte *)plVar1[3]) goto LAB_00673dad;
  while (uVar5 = (**(code **)(*plVar1 + 0x48))(plVar1), (int)uVar5 != -1) {
    while( true ) {
      if ((*(byte *)(*(long *)(lVar3 + 0x30) + 1 + (uVar5 & 0xff) * 2) & 0x20) == 0)
      goto LAB_00673def;
      pbVar6 = (byte *)plVar1[3];
      if ((byte *)plVar1[2] < pbVar6) {
        pbVar4 = (byte *)plVar1[2] + 1;
        plVar1[2] = (long)pbVar4;
      }
      else {
        iVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
        if (iVar2 == -1) goto LAB_00673dd9;
        pbVar4 = (byte *)plVar1[2];
        pbVar6 = (byte *)plVar1[3];
      }
      if (pbVar6 <= pbVar4) break;
LAB_00673dad:
      uVar5 = (ulong)*pbVar4;
    }
  }
LAB_00673dd9:
  lVar3 = *(long *)(*param_1 + -0x18) + (long)param_1;
  FUN_0066ec40(lVar3,*(uint *)(lVar3 + 0x20) | 2);
LAB_00673def:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

