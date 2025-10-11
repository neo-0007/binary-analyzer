
void FUN_00404713(void)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  byte bVar5;
  undefined8 local_138 [16];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_20;
  
  bVar5 = 0;
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(in_FS_OFFSET + 0x10);
  lVar1 = DAT_009464b8;
  if (DAT_009464b8 != lVar2) {
    LOCK();
    bVar4 = DAT_009464b0 == 0;
    if (bVar4) {
      DAT_009464b0 = 1;
    }
    UNLOCK();
    lVar1 = lVar2;
    if (!bVar4) {
      FUN_00709590(&DAT_009464b0);
    }
  }
  DAT_009464b8 = lVar1;
  DAT_009464b4 = DAT_009464b4 + 1;
  if (DAT_009464c0 == 0) {
    DAT_009464c0 = 1;
    local_138[0] = 0x20;
    FUN_00790ae0(1,local_138,0);
  }
  if (DAT_009464c0 == 1) {
    DAT_009464c0 = 0;
    DAT_009464b4 = DAT_009464b4 + -1;
    if (DAT_009464b4 == 0) {
      DAT_009464b8 = 0;
      LOCK();
      UNLOCK();
      bVar4 = 1 < DAT_009464b0;
      DAT_009464b0 = DAT_009464b4;
      if (bVar4) {
        FUN_00709660(&DAT_009464b0);
      }
    }
    FUN_006e83a0(6);
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    lVar1 = DAT_009464b8;
    if (DAT_009464b8 != lVar2) {
      LOCK();
      bVar4 = DAT_009464b0 == 0;
      if (bVar4) {
        DAT_009464b0 = 1;
      }
      UNLOCK();
      lVar1 = lVar2;
      if (!bVar4) {
        FUN_00709590(&DAT_009464b0);
      }
    }
    DAT_009464b8 = lVar1;
    DAT_009464b4 = DAT_009464b4 + 1;
  }
  else if (DAT_009464c0 != 2) goto LAB_0040485b;
  DAT_009464c0 = 3;
  puVar3 = local_b8;
  for (lVar2 = 0x26; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
  }
  local_b0 = 0xffffffffffffffff;
  FUN_006e83e0(6,local_b8,0);
LAB_0040485b:
  if (DAT_009464c0 == 3) {
    DAT_009464c0 = 4;
    FUN_006e83a0(6);
  }
  if (DAT_009464c0 != 4) {
    if (DAT_009464c0 == 5) {
      DAT_009464c0 = 6;
      FUN_00768c20(0x7f);
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

