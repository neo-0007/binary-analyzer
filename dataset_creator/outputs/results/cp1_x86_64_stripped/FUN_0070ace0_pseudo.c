
/* WARNING: Removing unreachable block (ram,0x0070adfc) */
/* WARNING: Removing unreachable block (ram,0x0070ad60) */
/* WARNING: Removing unreachable block (ram,0x0070ad68) */
/* WARNING: Removing unreachable block (ram,0x0070ad6e) */
/* WARNING: Removing unreachable block (ram,0x0070ae08) */

undefined8 FUN_0070ace0(uint *param_1,code *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  code *local_58;
  uint *local_50;
  undefined4 local_48;
  undefined1 auStack_44 [12];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar2 = *param_1;
    do {
      if ((uVar2 & 2) != 0) goto LAB_0070ad11;
      uVar3 = DAT_0094a980 | 1;
      LOCK();
      uVar1 = *param_1;
      bVar4 = uVar2 == uVar1;
      if (bVar4) {
        *param_1 = uVar3;
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      UNLOCK();
    } while (!bVar4);
    if ((uVar3 != uVar2) || ((uVar2 & 1) == 0)) break;
    syscall();
  }
  local_28 = 0;
  local_58 = FUN_0070ae20;
  auStack_44 = SUB1612((undefined1  [16])0x0,4);
  local_48 = 1;
  local_38 = (undefined1  [16])0x0;
  local_50 = param_1;
                    /* try { // try from 0070adc1 to 0070add1 has its CatchHandler @ 0070ae12 */
  FUN_007a27b0(auStack_44 + 4,&LAB_0070ae70,&local_58);
  (*param_2)();
  FUN_007a27e0(auStack_44 + 4,0);
  *param_1 = 2;
  syscall();
LAB_0070ad11:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1);
}

