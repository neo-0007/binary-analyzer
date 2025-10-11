
void FUN_00784320(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  char *local_40;
  
  lVar5 = 1;
  puVar4 = &DAT_0083e5c2;
  if (param_2 != (undefined1 *)0x0) {
    lVar5 = thunk_FUN_007129d0(param_2);
    lVar5 = lVar5 + 1;
    puVar4 = param_2;
  }
  lVar1 = thunk_FUN_007129d0(param_3);
  pcVar2 = (char *)FUN_007101b0(lVar1 + 1 + lVar5);
  if (pcVar2 == (char *)0x0) {
    puVar4 = &DAT_0083e5c2;
    local_40 = "out of memory";
  }
  else {
    uVar3 = thunk_FUN_00713820(pcVar2,param_3,lVar1 + 1);
    puVar4 = (undefined1 *)thunk_FUN_00713a50(uVar3,puVar4,lVar5);
    local_40 = pcVar2;
  }
  param_1[2] = pcVar2;
  *param_1 = puVar4;
  param_1[1] = local_40;
  return;
}

