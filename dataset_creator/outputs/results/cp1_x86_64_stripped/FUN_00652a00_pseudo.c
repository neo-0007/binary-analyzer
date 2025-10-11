
undefined8 * FUN_00652a00(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_006c2cc0(param_1,&PTR_PTR_00933bc0,&PTR_PTR_00934d68);
  if (puVar1 == (undefined8 *)0x0) {
    if (param_2 == &DAT_00945348) {
      puVar3 = (undefined8 *)FUN_006c31f0(0x90);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_00933fe8;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      *(undefined2 *)(puVar3 + 9) = 0;
      *(undefined1 *)(puVar3 + 0x11) = 0;
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = puVar3;
      *puVar1 = &PTR_FUN_00935558;
                    /* try { // try from 00652bf4 to 00652bf8 has its CatchHandler @ 00653500 */
      FUN_0062afb0(puVar1,0);
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      puVar1[4] = puVar3;
      *puVar1 = &PTR_FUN_00935c88;
                    /* try { // try from 00652c24 to 00652c28 has its CatchHandler @ 00653494 */
      FUN_00632400(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945330) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x20);
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR_FUN_009354e8;
                    /* try { // try from 00652d03 to 00652d07 has its CatchHandler @ 006534e8 */
      uVar2 = FUN_006256a0();
      puVar1[2] = uVar2;
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00935cd0;
    }
    else if (param_2 == &DAT_00945340) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_00935820;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00935f28;
    }
    else if (param_2 == &DAT_00945368) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_009357c0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918278;
    }
    else if (param_2 == &DAT_00945360) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_009357f0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_009182a8;
    }
    else if (param_2 == &DAT_00945350) {
      puVar3 = (undefined8 *)FUN_006c31f0(0x70);
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined2 *)(puVar3 + 4) = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_00933f38;
      puVar3[3] = 0;
      *(undefined1 *)((long)puVar3 + 0x22) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined1 *)((long)puVar3 + 0x6f) = 0;
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = puVar3;
      *puVar1 = &PTR_FUN_009355e8;
                    /* try { // try from 00652e93 to 00652e97 has its CatchHandler @ 00653470 */
      FUN_00627740(puVar1,0,0);
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      puVar1[4] = puVar3;
      *puVar1 = &PTR_FUN_00935d08;
                    /* try { // try from 00652ec7 to 00652ecb has its CatchHandler @ 00653488 */
      FUN_00632bc0(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945358) {
      puVar3 = (undefined8 *)FUN_006c31f0(0x70);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_00933f58;
      *(undefined2 *)(puVar3 + 4) = 0;
      *(undefined1 *)((long)puVar3 + 0x22) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined1 *)((long)puVar3 + 0x6f) = 0;
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = puVar3;
      *puVar1 = &PTR_FUN_00935650;
                    /* try { // try from 00652f8b to 00652f8f has its CatchHandler @ 00653464 */
      FUN_00627c60(puVar1,0,0);
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      puVar1[4] = puVar3;
      *puVar1 = &PTR_FUN_00935d70;
                    /* try { // try from 00652fbf to 00652fc3 has its CatchHandler @ 006534f4 */
      FUN_00632ef0(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945338) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
                    /* try { // try from 00652ff2 to 00652ff6 has its CatchHandler @ 006534b8 */
      FUN_0064e800(puVar1,0);
      puVar1[4] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_009182d8;
    }
    else if (param_2 == &DAT_009453c8) {
      puVar3 = (undefined8 *)FUN_006c31f0(0x150);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_00934008;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      *(undefined1 *)(puVar3 + 0x29) = 0;
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = puVar3;
      *puVar1 = &PTR_FUN_00936218;
                    /* try { // try from 006530c5 to 006530c9 has its CatchHandler @ 006534d0 */
      FUN_0062b290(puVar1,0);
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      puVar1[4] = puVar3;
      *puVar1 = &PTR_FUN_00935dd8;
                    /* try { // try from 006530f9 to 006530fd has its CatchHandler @ 0065350c */
      FUN_00632670(param_1,puVar3);
    }
    else if (param_2 == &DAT_009453b0) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x20);
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR_FUN_009361a8;
                    /* try { // try from 00652caa to 00652cae has its CatchHandler @ 006534a0 */
      uVar2 = FUN_006256a0();
      puVar1[2] = uVar2;
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00935e20;
    }
    else if (param_2 == &DAT_009453c0) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_009364e0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00935f80;
    }
    else if (param_2 == &DAT_009453e8) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_00936480;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918310;
    }
    else if (param_2 == &DAT_009453e0) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_009364b0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918340;
    }
    else if (param_2 == &DAT_009453d0) {
      puVar3 = (undefined8 *)FUN_006c31f0(0xa0);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_00933f78;
      *(undefined1 *)(puVar3 + 4) = 0;
      *(undefined8 *)((long)puVar3 + 0x24) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      *(undefined4 *)(puVar3 + 0xd) = 0;
      *(undefined1 *)(puVar3 + 0x13) = 0;
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = puVar3;
      *puVar1 = &PTR_FUN_009362a8;
                    /* try { // try from 006532da to 006532de has its CatchHandler @ 006534c4 */
      FUN_00628370(puVar1,0,0);
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      puVar1[4] = puVar3;
      *puVar1 = &PTR_FUN_00935e58;
                    /* try { // try from 0065330e to 00653312 has its CatchHandler @ 006534dc */
      FUN_00633220(param_1,puVar3);
    }
    else if (param_2 == &DAT_009453d8) {
      puVar3 = (undefined8 *)FUN_006c31f0(0xa0);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_00933f98;
      *(undefined1 *)(puVar3 + 4) = 0;
      *(undefined8 *)((long)puVar3 + 0x24) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      *(undefined4 *)(puVar3 + 0xd) = 0;
      *(undefined1 *)(puVar3 + 0x13) = 0;
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = puVar3;
      *puVar1 = &PTR_FUN_00936310;
                    /* try { // try from 006533d9 to 006533dd has its CatchHandler @ 00653458 */
      FUN_00628940(puVar1,0,0);
      puVar1[3] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      puVar1[4] = puVar3;
      *puVar1 = &PTR_FUN_00935ec0;
                    /* try { // try from 00653409 to 0065340d has its CatchHandler @ 006534ac */
      FUN_006335f0(param_1,puVar3);
    }
    else {
      if (param_2 != &DAT_009453b8) {
                    /* WARNING: Subroutine does not return */
        FUN_00403890("cannot create shim for unknown locale::facet");
      }
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
                    /* try { // try from 00652b2a to 00652b2e has its CatchHandler @ 0065347c */
      FUN_00662760(puVar1,0);
      puVar1[4] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918370;
    }
  }
  else {
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1;
}

