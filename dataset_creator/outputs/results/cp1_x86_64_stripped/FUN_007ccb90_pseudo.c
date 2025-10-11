
void FUN_007ccb90(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = DAT_009461e0;
  if (DAT_009461e0 == (long *)0x0) {
LAB_007ccbfc:
    DAT_009461e0 = (long *)0x0;
    if (DAT_009462a8 != (undefined8 *)0x0) {
      if (DAT_009462a8 != &DAT_00946290) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("archmapped == &headmap","loadarchive.c",0x216,"_nl_archive_subfreeres");
      }
      DAT_009462a8 = (undefined8 *)0x0;
      FUN_0076f080(DAT_00946290,DAT_0094629c);
      puVar3 = puRam00000000009462a0;
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar3[2];
        FUN_0076f080(*puVar3,*(undefined4 *)((long)puVar3 + 0xc));
        FUN_007104f0(puVar3);
        puVar3 = puVar2;
      }
    }
    return;
  }
LAB_007ccba8:
  lVar4 = 0;
  plVar1 = (long *)*plVar6;
  FUN_007104f0(plVar6[1]);
  do {
    if (lVar4 != 6) {
      lVar5 = plVar6[lVar4 + 2];
      if (lVar5 != 0) {
        if (*(code **)(lVar5 + 0x20) != (code *)0x0) {
          (**(code **)(lVar5 + 0x20))();
          lVar5 = plVar6[lVar4 + 2];
        }
        FUN_007104f0(lVar5);
      }
      if (lVar4 == 0xc) break;
    }
    lVar4 = lVar4 + 1;
  } while( true );
  FUN_007104f0(plVar6);
  plVar6 = plVar1;
  if (plVar1 == (long *)0x0) goto LAB_007ccbfc;
  goto LAB_007ccba8;
}

