
long * FUN_0067e080(undefined8 param_1,long *param_2,char param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,char param_7,char param_8)

{
  long *plVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_cc;
  char local_cb;
  char local_ca;
  undefined1 local_c9;
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)FUN_0067c1e0();
  uVar2 = FUN_0067e030(param_4 + 0xd0);
  if ((char)plVar1[7] == '\0') {
    FUN_0063d6f0(plVar1);
    local_cc = 0x25;
    if (*(code **)(*plVar1 + 0x30) != FUN_00405e50) {
      local_cc = (**(code **)(*plVar1 + 0x30))(plVar1,0x25);
    }
  }
  else {
    local_cc = *(undefined1 *)((long)plVar1 + 0x5e);
  }
  local_cb = param_8;
  if (param_8 == '\0') {
    local_ca = '\0';
    local_cb = param_7;
  }
  else {
    local_c9 = 0;
    local_ca = param_7;
  }
  FUN_006c8020(uVar2,local_c8,0x80,&local_cc,param_6);
  uVar2 = thunk_FUN_007129d0(local_c8);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x60))(param_2,local_c8,uVar2);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_2;
}

