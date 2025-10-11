
undefined8 * FUN_0051b290(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_list.c",0x177,"ENGINE_by_id");
    FUN_0051f8f0(0x26,0xc0102,0);
    return (undefined8 *)0x0;
  }
  FUN_00518e20();
  iVar1 = FUN_00422340(&DAT_00941004,FUN_0051a300);
  if ((iVar1 == 0) || (DAT_00941000 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_list.c",0x17d,"ENGINE_by_id");
    FUN_0051f8f0(0x26,0xc0100,0);
    return (undefined8 *)0x0;
  }
  iVar1 = FUN_004222c0(DAT_00941008);
  puVar4 = DAT_00941038;
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[0x18]) {
    iVar1 = thunk_FUN_00712780(param_1,*puVar4);
    if (iVar1 == 0) {
      if ((*(byte *)(puVar4 + 0x13) & 4) == 0) {
        LOCK();
        *(int *)((long)puVar4 + 0x9c) = *(int *)((long)puVar4 + 0x9c) + 1;
        UNLOCK();
      }
      else {
        puVar2 = (undefined8 *)FUN_0051a350();
        if (puVar2 == (undefined8 *)0x0) break;
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
        puVar2[3] = puVar4[3];
        puVar2[4] = puVar4[4];
        puVar2[5] = puVar4[5];
        puVar2[6] = puVar4[6];
        puVar2[7] = puVar4[7];
        puVar2[8] = puVar4[8];
        puVar2[9] = puVar4[9];
        puVar2[0xb] = puVar4[0xb];
        puVar2[0xc] = puVar4[0xc];
        puVar2[0xd] = puVar4[0xd];
        puVar2[0xe] = puVar4[0xe];
        puVar2[0xf] = puVar4[0xf];
        puVar2[0x10] = puVar4[0x10];
        puVar2[0x12] = puVar4[0x12];
        *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)(puVar4 + 0x13);
        puVar2[0x1b] = puVar4[0x1b];
        FUN_0051a940(puVar2,0,0);
        puVar4 = puVar2;
      }
      FUN_004222e0(DAT_00941008);
      return puVar4;
    }
  }
  FUN_004222e0(DAT_00941008);
  iVar1 = thunk_FUN_00712780(param_1,"dynamic");
  if (iVar1 != 0) {
    pcVar3 = (char *)thunk_FUN_006e8f20("OPENSSL_ENGINES");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "/usr/lib/x86_64-linux-gnu/engines-3";
    }
    puVar4 = (undefined8 *)FUN_0051b290("dynamic");
    if (puVar4 != (undefined8 *)0x0) {
      iVar1 = FUN_005fae50(puVar4,"ID",param_1,0);
      if ((((iVar1 != 0) && (iVar1 = FUN_005fae50(puVar4,"DIR_LOAD","2",0), iVar1 != 0)) &&
          (iVar1 = FUN_005fae50(puVar4,"DIR_ADD",pcVar3,0), iVar1 != 0)) &&
         ((iVar1 = FUN_005fae50(puVar4,"LIST_ADD","1",0), iVar1 != 0 &&
          (iVar1 = FUN_005fae50(puVar4,"LOAD",0,0), iVar1 != 0)))) {
        return puVar4;
      }
      goto LAB_0051b583;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_0051b583:
  FUN_0051a5a0(puVar4);
  FUN_0051f420();
  FUN_0051f540("../crypto/engine/eng_list.c",0x1ae,"ENGINE_by_id");
  FUN_0051f8f0(0x26,0x74,"id=%s",param_1);
  return (undefined8 *)0x0;
}

