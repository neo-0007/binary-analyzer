
long * FUN_004058e0(long *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  uint local_21c;
  undefined **local_218 [5];
  uint local_1f0 [2];
  ulong local_1e8;
  long local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [8];
  undefined4 local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined **local_198 [14];
  char acStack_128 [16];
  long alStack_118 [11];
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = FUN_00405f40();
  if (lVar6 == 0) {
    uVar7 = FUN_006231b0(0x10);
    FUN_00635990(uVar7,"Failed to create EVP_MD_CTX");
                    /* WARNING: Subroutine does not return */
    FUN_00624060(uVar7,&PTR_PTR_00934090,FUN_0062c010);
  }
  uVar7 = FUN_0040bf10();
  iVar5 = FUN_00407430(lVar6,uVar7,0);
  if (iVar5 != 1) {
    FUN_00406b90(lVar6);
    uVar7 = FUN_006231b0(0x10);
                    /* try { // try from 00405dda to 00405dde has its CatchHandler @ 00405de9 */
    FUN_00635990(uVar7,"EVP_DigestInit_ex failed");
    plVar8 = (long *)FUN_00402000();
    return plVar8;
  }
  iVar5 = FUN_00405f60(lVar6,*param_2,param_2[1]);
  if (iVar5 != 1) {
    FUN_00406b90(lVar6);
    uVar7 = FUN_006231b0(0x10);
                    /* try { // try from 00405db1 to 00405db5 has its CatchHandler @ 00405e3d */
    FUN_00635990(uVar7,"EVP_DigestUpdate failed");
    plVar8 = (long *)FUN_00402149();
    return plVar8;
  }
  local_21c = 0;
  iVar5 = FUN_00406090(lVar6,local_88,&local_21c);
  if (iVar5 != 1) {
    FUN_00406b90(lVar6);
    uVar7 = FUN_006231b0(0x10);
                    /* try { // try from 00405d88 to 00405d8c has its CatchHandler @ 00405df5 */
    FUN_00635990(uVar7,"EVP_DigestFinal_ex failed");
    plVar8 = (long *)FUN_00402016();
    return plVar8;
  }
  FUN_00406b90(lVar6);
  FUN_00670010(local_198);
  local_198[0] = &PTR_FUN_009370d8;
  local_b8 = 0;
  local_218[0] = (undefined **)PTR_DAT_009383e0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  *(undefined **)((long)local_218 + *(long *)(PTR_DAT_009383e0 + -0x18)) = PTR_DAT_009383e8;
  local_218[1] = (undefined **)0x0;
                    /* try { // try from 00405a2c to 00405a30 has its CatchHandler @ 00405e25 */
  FUN_0066f450((long)local_218 + *(long *)(PTR_DAT_009383e0 + -0x18),0);
  local_218[2] = (undefined **)PTR_DAT_009383f0;
  puVar9 = (undefined8 *)(*(long *)(PTR_DAT_009383f0 + -0x18) + (long)(local_218 + 2));
  *puVar9 = PTR_DAT_009383f8;
                    /* try { // try from 00405a55 to 00405a59 has its CatchHandler @ 00405e19 */
  FUN_0066f450(puVar9,0);
  *(undefined **)((long)local_218 + *(long *)(PTR_DAT_009383d8 + -0x18)) = PTR_DAT_00938400;
  local_218[0] = &PTR_FUN_00938438;
  local_198[0] = &PTR_FUN_00938488;
  local_218[2] = &PTR_FUN_00938460;
  local_218[3] = &PTR_FUN_009388a8;
  local_218[4] = (undefined **)0x0;
  local_1f0[0] = 0;
  local_1f0[1] = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  FUN_006274c0(local_1c8);
  local_218[3] = &PTR_FUN_009380c8;
  local_1c0 = 0x18;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1b8 = &local_1a8;
                    /* try { // try from 00405b30 to 00405b34 has its CatchHandler @ 00405e0d */
  FUN_0066f450(local_198,local_218 + 3);
  lVar6 = 0;
  if (local_21c != 0) {
    do {
      puVar3 = local_218[2][-3];
      uVar2 = *(uint *)((long)local_1f0 + (long)puVar3);
      *(undefined8 *)(puVar3 + (long)(local_218 + 4)) = 2;
      puVar4 = local_218[2][-3];
      cVar1 = acStack_128[(long)(puVar4 + 1)];
      *(uint *)((long)local_1f0 + (long)puVar3) = uVar2 & 0xffffffb5 | 8;
      if (cVar1 == '\0') {
        plVar8 = *(long **)((long)alStack_118 + (long)puVar4);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00403826();
        }
        if ((char)plVar8[7] == '\0') {
          FUN_0063d6f0(plVar8);
          if (*(code **)(*plVar8 + 0x30) != FUN_00405e50) {
                    /* try { // try from 00405d60 to 00405d6b has its CatchHandler @ 00405e01 */
            (**(code **)(*plVar8 + 0x30))(plVar8,0x20);
          }
        }
        acStack_128[(long)(puVar4 + 1)] = '\x01';
      }
      acStack_128[(long)puVar4] = '0';
                    /* try { // try from 00405b57 to 00405bb4 has its CatchHandler @ 00405e01 */
      FUN_0068e690(local_218 + 2,local_88[lVar6]);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < local_21c);
  }
  param_1[1] = 0;
  *param_1 = (long)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = 0;
  if (local_1d8 == 0) {
    FUN_0069e200(param_1,&local_1b8);
  }
  else {
    if ((local_1e8 == 0) || (uVar10 = local_1e8, local_1e8 < local_1d8)) {
      uVar10 = local_1d8;
    }
                    /* try { // try from 00405c28 to 00405d4f has its CatchHandler @ 00405e31 */
    FUN_0069f220(param_1,0,0,local_1e0,uVar10 - local_1e0);
  }
  local_218[0] = &PTR_FUN_00938438;
  local_198[0] = &PTR_FUN_00938488;
  local_218[2] = &PTR_FUN_00938460;
  local_218[3] = &PTR_FUN_009380c8;
  if (local_1b8 != &local_1a8) {
    thunk_FUN_007104f0(local_1b8,CONCAT71(uStack_1a7,local_1a8) + 1);
  }
  local_218[3] = &PTR_FUN_009388a8;
  FUN_00625980(local_1c8);
  *(undefined **)((long)local_218 + *(long *)(PTR_DAT_009383d8 + -0x18)) = PTR_DAT_00938400;
  local_218[2] = (undefined **)PTR_DAT_009383f0;
  *(undefined **)((long)local_218 + *(long *)(PTR_DAT_009383f0 + -0x18) + 0x10) = PTR_DAT_009383f8;
  local_218[0] = (undefined **)PTR_DAT_009383e0;
  *(undefined **)((long)local_218 + *(long *)(PTR_DAT_009383e0 + -0x18)) = PTR_DAT_009383e8;
  local_198[0] = &PTR_FUN_009370d8;
  local_218[1] = (undefined **)0x0;
  FUN_00670330(local_198);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

