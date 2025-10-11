
void FUN_006e20d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  FUN_0070b650(1,0);
  pcVar5 = ": ";
  if (param_5 == (undefined1 *)0x0) {
    pcVar5 = "";
    param_5 = &DAT_0083e5c2;
  }
  pcVar7 = ": ";
  if (*PTR_DAT_0093ea18 == '\0') {
    pcVar7 = "";
  }
  iVar4 = FUN_006f4ae0(&local_38,param_1,PTR_DAT_0093ea18,pcVar7,param_3,param_4,param_5,pcVar5,
                       param_2,&local_3c);
  if (iVar4 < 0) {
    FUN_0076da60(2,"Unexpected error.\n",0x12);
  }
  else {
    FUN_006fcea0(0,&DAT_007e3d61,local_38);
    FUN_006fd670(PTR_DAT_0093e068);
    local_3c = local_3c + (int)DAT_0093eb18 + 4 & -(int)DAT_0093eb18;
    puVar6 = (uint *)FUN_0076f020(0,(long)(int)local_3c,3,0x22,0xffffffff,0);
    puVar3 = DAT_009464a0;
    if (puVar6 != (uint *)0xffffffffffffffff) {
      *puVar6 = local_3c;
      thunk_FUN_00712800(puVar6 + 1,local_38);
      puVar2 = DAT_009464a0;
      LOCK();
      UNLOCK();
      puVar3 = puVar6;
      if (DAT_009464a0 != (uint *)0x0) {
        uVar1 = *DAT_009464a0;
        DAT_009464a0 = puVar6;
        FUN_0076f080(puVar2,uVar1);
        FUN_004046ff();
        return;
      }
    }
    DAT_009464a0 = puVar3;
    FUN_007104f0(local_38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00404713();
}

