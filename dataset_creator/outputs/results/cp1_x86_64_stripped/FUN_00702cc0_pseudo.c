
/* WARNING: Removing unreachable block (ram,0x00702d20) */
/* WARNING: Removing unreachable block (ram,0x00702d5f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00702cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  lVar4 = thunk_FUN_007129d0(param_3);
  syscall();
  uVar7 = DAT_0093eb18 + 4 + lVar4 & -DAT_0093eb18;
  puVar5 = (undefined4 *)FUN_0076f020(0,uVar7,3,0x22,0xffffffff,0);
  puVar3 = DAT_009464a0;
  if (puVar5 != (undefined4 *)0xffffffffffffffff) {
    *puVar5 = (int)uVar7;
    puVar6 = (undefined1 *)thunk_FUN_00713820(puVar5 + 1,param_3,lVar4);
    *puVar6 = 0;
    puVar2 = DAT_009464a0;
    LOCK();
    UNLOCK();
    puVar3 = puVar5;
    if (DAT_009464a0 != (undefined4 *)0x0) {
      uVar1 = *DAT_009464a0;
      DAT_009464a0 = puVar5;
      FUN_0076f080(puVar2,uVar1);
      puVar3 = DAT_009464a0;
    }
  }
  DAT_009464a0 = puVar3;
                    /* WARNING: Subroutine does not return */
  FUN_00404713();
}

