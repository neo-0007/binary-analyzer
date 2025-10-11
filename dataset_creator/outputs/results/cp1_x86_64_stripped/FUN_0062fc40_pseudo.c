
void FUN_0062fc40(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  uVar3 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_009378c0;
                    /* try { // try from 0062fca7 to 0062fcab has its CatchHandler @ 0063031c */
  FUN_0062b850(puVar1,uVar3);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945480);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  local_48 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_00937850;
  uVar3 = FUN_006c4570(&local_48);
  bVar6 = DAT_0093ea10 == '\0';
  puVar1[2] = uVar3;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945458);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  uVar3 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00937ad0;
                    /* try { // try from 0062fd75 to 0062fd79 has its CatchHandler @ 00630310 */
  FUN_00629a60(puVar1,uVar3,0);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945490);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  uVar3 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00937a68;
                    /* try { // try from 0062fddb to 0062fddf has its CatchHandler @ 00630364 */
  FUN_00629540(puVar1,uVar3,0);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945488);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  bVar6 = DAT_0093ea10 == '\0';
  *puVar1 = &PTR_FUN_00937cf0;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_009454a0);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  bVar6 = DAT_0093ea10 == '\0';
  *puVar1 = &PTR_FUN_00937d20;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945498);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  bVar6 = DAT_0093ea10 == '\0';
  *puVar1 = &PTR_FUN_00937da0;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945468);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  lVar4 = FUN_006c31f0(0x20);
                    /* try { // try from 0062ff21 to 0062ff25 has its CatchHandler @ 00630358 */
  FUN_0067bb90(lVar4,*param_2,param_4,0);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar5 = FUN_00625ba0(&DAT_00945460);
  *(long *)(lVar2 + lVar5 * 8) = lVar4;
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  uVar3 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00938d80;
                    /* try { // try from 0062ff85 to 0062ff89 has its CatchHandler @ 0063034c */
  FUN_0062bb60(puVar1,uVar3);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945540);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  local_48 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_00938c90;
  uVar3 = FUN_006c4570(&local_48);
  bVar6 = DAT_0093ea10 == '\0';
  puVar1[2] = uVar3;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945518);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar3 = *param_3;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00938f90;
                    /* try { // try from 0063004d to 00630051 has its CatchHandler @ 00630340 */
  FUN_0062a780(puVar1,uVar3,param_5);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945550);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x18);
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar3 = *param_3;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00938f28;
                    /* try { // try from 006300af to 006300b3 has its CatchHandler @ 00630334 */
  FUN_0062a1b0(puVar1,uVar3,param_5);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945548);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  bVar6 = DAT_0093ea10 == '\0';
  *puVar1 = &PTR_FUN_009391b0;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945560);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  bVar6 = DAT_0093ea10 == '\0';
  *puVar1 = &PTR_FUN_009391e0;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945558);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  puVar1 = (undefined8 *)FUN_006c31f0(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  bVar6 = DAT_0093ea10 == '\0';
  *puVar1 = &PTR_FUN_00939260;
  if (bVar6) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = FUN_00625ba0(&DAT_00945528);
  *(undefined8 **)(lVar4 + lVar2 * 8) = puVar1;
  lVar4 = FUN_006c31f0(0x20);
                    /* try { // try from 006301cd to 006301d1 has its CatchHandler @ 00630328 */
  FUN_006a4550(lVar4,*param_2,param_4,0);
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar5 = FUN_00625ba0(&DAT_00945520);
  *(long *)(lVar2 + lVar5 * 8) = lVar4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

