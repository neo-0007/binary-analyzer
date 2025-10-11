
bool FUN_005b3920(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"state");
  if (lVar2 == 0) {
LAB_005b395a:
    lVar2 = FUN_0041cdd0(param_2,"strength");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d0b0(lVar2,*(undefined4 *)(param_1 + 0x80));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"max_request");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x88));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"min_entropylen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x90));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"max_entropylen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x98));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"min_noncelen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0xa0));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"max_noncelen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0xa8));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"max_perslen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0xb0));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"max_adinlen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0xb8));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"reseed_requests");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d380(lVar2,*(undefined4 *)(param_1 + 0xc4));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"reseed_time");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d660(lVar2,*(undefined8 *)(param_1 + 200));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"reseed_time_interval");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d660(lVar2,*(undefined8 *)(param_1 + 0xd0));
      if (iVar1 == 0) goto LAB_005b3b60;
    }
    lVar2 = FUN_0041cdd0(param_2,"reseed_counter");
    bVar3 = true;
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d380(lVar2,*(undefined4 *)(param_1 + 0xd8));
      bVar3 = iVar1 != 0;
    }
  }
  else {
    iVar1 = thunk_FUN_0041d0b0(lVar2,*(undefined4 *)(param_1 + 0xf0));
    if (iVar1 != 0) goto LAB_005b395a;
LAB_005b3b60:
    bVar3 = false;
  }
  return bVar3;
}

