
void FUN_00624420(void)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  int local_24;
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (DAT_009428c0 != '\0') {
    FUN_006fdea0("terminate called recursively\n",1,0x1d,PTR_DAT_0093e068);
                    /* WARNING: Subroutine does not return */
    FUN_00404713();
  }
  DAT_009428c0 = 1;
  lVar1 = FUN_006c2fd0();
  if (lVar1 != 0) {
    local_24 = -1;
    pcVar3 = *(char **)(lVar1 + 8) + (**(char **)(lVar1 + 8) == '*');
    uVar2 = FUN_006c2af0(pcVar3,0,0,&local_24);
    FUN_006fdea0("terminate called after throwing an instance of \'",1,0x30,PTR_DAT_0093e068);
    if (local_24 == 0) {
      FUN_006fdb20(uVar2,PTR_DAT_0093e068);
    }
    else {
      FUN_006fdb20(pcVar3,PTR_DAT_0093e068);
    }
    FUN_006fdea0(&DAT_0081d913,1,2,PTR_DAT_0093e068);
    if (local_24 == 0) {
      FUN_00402374();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006fdea0("terminate called without an active exception\n",1,0x2d,PTR_DAT_0093e068);
                    /* WARNING: Subroutine does not return */
  FUN_00404713();
}

