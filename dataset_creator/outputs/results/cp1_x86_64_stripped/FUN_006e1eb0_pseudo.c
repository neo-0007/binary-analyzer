
undefined ** FUN_006e1eb0(undefined **param_1)

{
  undefined **ppuVar1;
  long in_FS_OFFSET;
  bool bVar2;
  
  ppuVar1 = *(undefined ***)(in_FS_OFFSET + -0x78);
  if (param_1 != (undefined **)0x0) {
    if (param_1 == (undefined **)0xffffffffffffffff) {
      param_1 = &PTR_PTR_0093d9c0;
    }
    bVar2 = PTR_0093af60 != (undefined *)0x0;
    *(undefined ***)(in_FS_OFFSET + -0x78) = param_1;
    if (bVar2) {
      *(undefined ***)(in_FS_OFFSET + -0x80) = param_1 + 3;
    }
    if (PTR_0093afa0 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0xd8) = param_1;
    }
    if (PTR_0093af88 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -200) = param_1 + 4;
    }
    if (PTR_0093af80 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0xc0) = param_1 + 1;
    }
    if (PTR_0093af38 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0xb8) = param_1 + 2;
    }
    if (PTR_0093af70 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0xd0) = param_1 + 5;
    }
    if (PTR_0093aed8 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0xb0) = param_1 + 7;
    }
    if (PTR_0093af30 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0xa8) = param_1 + 8;
    }
    if (PTR_0093aee8 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0xa0) = param_1 + 9;
    }
    if (PTR_0093afc0 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0x98) = param_1 + 10;
    }
    if (PTR_0093af20 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0x90) = param_1 + 0xb;
    }
    if (PTR_0093af18 != (undefined *)0x0) {
      *(undefined ***)(in_FS_OFFSET + -0x88) = param_1 + 0xc;
    }
    *(undefined **)(in_FS_OFFSET + -0x40) = param_1[0xd];
    *(undefined **)(in_FS_OFFSET + -0x50) = param_1[0xe];
    *(undefined **)(in_FS_OFFSET + -0x48) = param_1[0xf];
  }
  if (ppuVar1 == &PTR_PTR_0093d9c0) {
    ppuVar1 = (undefined **)0xffffffffffffffff;
  }
  return ppuVar1;
}

