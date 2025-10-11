
undefined ** FUN_006e1aa0(undefined **param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  if (param_1 == &PTR_PTR_00939c40) {
    ppuVar6 = &PTR_PTR_00939c40;
  }
  else {
    if (param_1 == (undefined **)0xffffffffffffffff) {
      param_1 = &PTR_PTR_0093d9c0;
    }
    if (param_1[0x10] == "C") {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1;
    }
    if (param_1[0x11] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x12] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x13] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x14] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x15] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x17] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x18] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x19] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x1a] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x1b] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    if (param_1[0x1c] != "C") {
      lVar5 = thunk_FUN_007129d0();
      lVar4 = lVar4 + 1 + lVar5;
    }
    ppuVar6 = (undefined **)FUN_007101b0(lVar4 + 0xe8);
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar7 = ppuVar6 + 0x1d;
      lVar4 = 0;
      FUN_0070b2d0(&DAT_00946120);
      do {
        if (lVar4 != 6) {
          puVar2 = param_1[lVar4];
          uVar1 = *(uint *)(puVar2 + 0x30);
          ppuVar6[lVar4] = puVar2;
          if (uVar1 < 0xfffffffe) {
            *(uint *)(puVar2 + 0x30) = uVar1 + 1;
          }
          if (param_1[lVar4 + 0x10] == "C") {
            ppuVar6[lVar4 + 0x10] = "C";
          }
          else {
            ppuVar6[lVar4 + 0x10] = (undefined *)ppuVar7;
            lVar5 = thunk_FUN_00713930(ppuVar7);
            ppuVar7 = (undefined **)(lVar5 + 1);
          }
          if (lVar4 == 0xc) {
            puVar2 = param_1[0xd];
            puVar3 = param_1[0xe];
            ppuVar6[0xf] = param_1[0xf];
            ppuVar6[0xd] = puVar2;
            ppuVar6[0xe] = puVar3;
            FUN_0070b100(&DAT_00946120);
            return ppuVar6;
          }
        }
        lVar4 = lVar4 + 1;
      } while( true );
    }
  }
  return ppuVar6;
}

