
long FUN_00785c20(ulong param_1,uint param_2,undefined8 param_3,long param_4,undefined4 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  undefined1 local_a8 [8];
  long local_a0;
  ulong local_88;
  uint local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  char local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((param_2 & 3) != 0) {
    FUN_0070a340(&DAT_0093eae0);
    if (param_4 == -1) {
      FUN_0070abb0(&DAT_0093eae0);
                    /* WARNING: Subroutine does not return */
      FUN_0078db10(0x16,param_1,0,"no more namespaces available for dlmopen()");
    }
    if ((param_4 + 2U & 0xfffffffffffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0078db10(0x16,param_1,0,"invalid target namespace in dlmopen()");
    }
    uStack_48 = param_7;
    local_70 = 0;
    local_88 = param_1;
    local_80 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_50 = param_6;
    uVar1 = FUN_0078db70(local_a8,FUN_007858e0,&local_88);
    param_1 = (ulong)uVar1;
    FUN_0078c790();
    if (-1 < local_68) {
      *(undefined4 *)(&DAT_0093eb7c + local_68 * 0xa0) = local_60;
    }
    if (local_a0 == 0) {
      lVar2 = FUN_007841f0();
      if (*(int *)(lVar2 + 0x18) == 0) {
        FUN_0070abb0(&DAT_0093eae0);
        return local_70;
      }
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("_dl_debug_update (args.nsid)->r_state == RT_CONSISTENT","dl-open.c",0x3a1,
                   "_dl_open");
    }
    if (local_5c == '\0') {
      *(undefined8 *)(&DAT_0093eb80 + local_68 * 0xa0) = 0;
    }
    if (local_70 != 0) {
      FUN_007840a0(local_70,1);
    }
    FUN_0070abb0(&DAT_0093eae0);
    FUN_0078dac0(param_1,local_a8,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0078db10(0x16,param_1,0,"invalid mode for dlopen()");
}

