
undefined8 * FUN_00634a50(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_006c2cc0(param_1,&PTR_PTR_00933bc0,&PTR_PTR_00934d68);
  if (puVar1 == (undefined8 *)0x0) {
    if (param_2 == &DAT_00945480) {
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
      *puVar1 = &PTR_FUN_009378c0;
                    /* try { // try from 00634c44 to 00634c48 has its CatchHandler @ 00635550 */
      FUN_0062b850(puVar1,0);
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
      *puVar1 = &PTR_FUN_00934df8;
                    /* try { // try from 00634c74 to 00634c78 has its CatchHandler @ 006354e4 */
      FUN_00650ea0(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945458) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x20);
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR_FUN_00937850;
                    /* try { // try from 00634d53 to 00634d57 has its CatchHandler @ 00635538 */
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
      *puVar1 = &PTR_FUN_00934e40;
    }
    else if (param_2 == &DAT_00945468) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_00937da0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_009181d8;
    }
    else if (param_2 == &DAT_009454a0) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_00937cf0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_009180a8;
    }
    else if (param_2 == &DAT_00945498) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_00937d20;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_009180d8;
    }
    else if (param_2 == &DAT_00945488) {
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
      *puVar1 = &PTR_FUN_00937a68;
                    /* try { // try from 00634ee3 to 00634ee7 has its CatchHandler @ 006354c0 */
      FUN_00629540(puVar1,0,0);
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
      *puVar1 = &PTR_FUN_00934e78;
                    /* try { // try from 00634f17 to 00634f1b has its CatchHandler @ 006354d8 */
      FUN_00651460(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945490) {
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
      *puVar1 = &PTR_FUN_00937ad0;
                    /* try { // try from 00634fdb to 00634fdf has its CatchHandler @ 006354b4 */
      FUN_00629a60(puVar1,0,0);
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
      *puVar1 = &PTR_FUN_00934ee0;
                    /* try { // try from 0063500f to 00635013 has its CatchHandler @ 00635544 */
      FUN_00651680(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945460) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
                    /* try { // try from 00635042 to 00635046 has its CatchHandler @ 00635508 */
      FUN_0067bb30(puVar1,0);
      puVar1[4] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918108;
    }
    else if (param_2 == &DAT_00945540) {
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
      *puVar1 = &PTR_FUN_00938d80;
                    /* try { // try from 00635115 to 00635119 has its CatchHandler @ 00635520 */
      FUN_0062bb60(puVar1,0);
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
      *puVar1 = &PTR_FUN_00934f48;
                    /* try { // try from 00635149 to 0063514d has its CatchHandler @ 0063555c */
      FUN_00651040(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945518) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x20);
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR_FUN_00938c90;
                    /* try { // try from 00634cfa to 00634cfe has its CatchHandler @ 006354f0 */
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
      *puVar1 = &PTR_FUN_00934f90;
    }
    else if (param_2 == &DAT_00945528) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_00939260;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918228;
    }
    else if (param_2 == &DAT_00945560) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_009391b0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918140;
    }
    else if (param_2 == &DAT_00945558) {
      puVar1 = (undefined8 *)FUN_006c31f0(0x18);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_1;
      *puVar1 = &PTR_FUN_009391e0;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_FUN_00918170;
    }
    else if (param_2 == &DAT_00945548) {
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
      *puVar1 = &PTR_FUN_00938f28;
                    /* try { // try from 0063532a to 0063532e has its CatchHandler @ 00635514 */
      FUN_0062a1b0(puVar1,0,0);
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
      *puVar1 = &PTR_FUN_00934fc8;
                    /* try { // try from 0063535e to 00635362 has its CatchHandler @ 0063552c */
      FUN_006518a0(param_1,puVar3);
    }
    else if (param_2 == &DAT_00945550) {
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
      *puVar1 = &PTR_FUN_00938f90;
                    /* try { // try from 00635429 to 0063542d has its CatchHandler @ 006354a8 */
      FUN_0062a780(puVar1,0,0);
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
      *puVar1 = &PTR_FUN_00935030;
                    /* try { // try from 00635459 to 0063545d has its CatchHandler @ 006354fc */
      FUN_00651b50(param_1,puVar3);
    }
    else {
      if (param_2 != &DAT_00945520) {
                    /* WARNING: Subroutine does not return */
        FUN_00403890("cannot create shim for unknown locale::facet");
      }
      puVar1 = (undefined8 *)FUN_006c31f0(0x28);
                    /* try { // try from 00634b7a to 00634b7e has its CatchHandler @ 006354cc */
      FUN_006a44f0(puVar1,0);
      puVar1[4] = param_1;
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      *puVar1 = &PTR_LAB_009181a0;
    }
  }
  else {
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1;
}

