
ulong FUN_004f9050(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  uVar4 = param_1[2] ^ 0xffffffffffffff;
  return ((uVar1 | uVar2 | param_1[2] | uVar3) - 1 |
         (uVar1 ^ 2 | uVar4 | uVar2 ^ 0xfffe0000000000 | uVar3 ^ 0x1ffffffffffffff) - 1 |
         (uVar1 ^ 1 | uVar2 ^ 0xffff0000000000 | uVar4 | uVar3 ^ 0xffffffffffffff) - 1) >> 0x3f;
}

