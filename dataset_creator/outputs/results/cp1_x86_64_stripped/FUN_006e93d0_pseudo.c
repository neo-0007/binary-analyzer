
undefined8 FUN_006e93d0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("func != NULL","cxa_atexit.c",0x29,"__internal_atexit");
  }
  LOCK();
  bVar3 = DAT_009464e8 == 0;
  if (bVar3) {
    DAT_009464e8 = 1;
  }
  UNLOCK();
  if (!bVar3) {
    FUN_00709590(&DAT_009464e8);
  }
  puVar1 = (undefined8 *)FUN_006e91e0(&PTR_DAT_0093dab0);
  if (puVar1 == (undefined8 *)0x0) {
    LOCK();
    UNLOCK();
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = 4;
    param_1 = param_1 ^ *(ulong *)(in_FS_OFFSET + 0x30);
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = param_1 << 0x11 | param_1 >> 0x2f;
    LOCK();
    UNLOCK();
    uVar2 = 0;
  }
  bVar3 = 1 < DAT_009464e8;
  DAT_009464e8 = 0;
  if (bVar3) {
    DAT_009464e8 = 0;
    FUN_00709660(&DAT_009464e8);
  }
  return uVar2;
}

