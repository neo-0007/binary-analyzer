
undefined8 FUN_005b8770(byte *param_1,int param_2,ulong *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
    return 0;
  }
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) == 0xc0) {
      if (param_2 == 1) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar2 = (ulong)(param_1[1] & 0x3f | (bVar1 & 0x1f) << 6);
      if (uVar2 < 0x80) {
        return 0xfffffffc;
      }
      uVar3 = 2;
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      if (param_2 < 3) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar2 = (ulong)(param_1[2] & 0x3f) |
              (long)(int)((bVar1 & 0xf) << 0xc | (param_1[1] & 0x3f) << 6);
      if (uVar2 < 0x800) {
        return 0xfffffffc;
      }
      if (uVar2 - 0xd800 < 0x800) {
        return 0xfffffffe;
      }
      uVar3 = 3;
    }
    else {
      if ((bVar1 & 0xf8) != 0xf0) {
        return 0xfffffffe;
      }
      if (param_2 < 4) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[3] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar2 = (ulong)((param_1[2] & 0x3f) << 6 |
                     (bVar1 & 7) << 0x12 | param_1[3] & 0x3f | (param_1[1] & 0x3f) << 0xc);
      if (uVar2 < 0x10000) {
        return 0xfffffffc;
      }
      uVar3 = 4;
    }
  }
  else {
    uVar2 = (ulong)bVar1;
    uVar3 = 1;
  }
  *param_3 = uVar2;
  return uVar3;
}

