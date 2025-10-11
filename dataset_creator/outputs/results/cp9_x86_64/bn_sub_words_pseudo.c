
ulong bn_sub_words(ulong *rp,ulong *ap,ulong *bp,int num)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (0 < num) {
    bVar4 = false;
    do {
      uVar1 = (ulong)bVar4;
      uVar2 = ap[uVar3] - bp[uVar3];
      bVar4 = ap[uVar3] < bp[uVar3] || uVar2 < uVar1;
      rp[uVar3] = uVar2 - uVar1;
      uVar3 = uVar3 + 1;
      num = num + -1;
    } while (num != 0);
    uVar3 = (ulong)(-(uint)bVar4 & 1);
  }
  return uVar3;
}

