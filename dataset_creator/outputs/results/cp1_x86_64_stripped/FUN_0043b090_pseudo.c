
undefined8 FUN_0043b090(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  bool bVar6;
  undefined8 uStack_18;
  
  lVar3 = FUN_0051a350();
  if (lVar3 == 0) {
    return uStack_18;
  }
  uVar1 = FUN_005b0e20();
  pcVar5 = "ACE";
  DAT_0093fe38 = 0;
  bVar6 = (uVar1 & 0xc0) == 0xc0;
  DAT_0093fe3c = (uint)bVar6;
  if (!bVar6) {
    pcVar5 = "no-ACE";
  }
  FUN_004aeb30(&DAT_0093fe40,100,"VIA PadLock (%s, %s)","no-RNG",pcVar5);
  iVar2 = FUN_0051a780(lVar3,"padlock");
  if ((((iVar2 != 0) && (iVar2 = FUN_0051a7e0(lVar3,&DAT_0093fe40), iVar2 != 0)) &&
      (iVar2 = FUN_0051a850(lVar3,FUN_0043b070), iVar2 != 0)) &&
     (((DAT_0093fe3c == 0 || (iVar2 = FUN_0051cca0(lVar3,&LAB_004397c0), iVar2 != 0)) &&
      ((DAT_0093fe38 == 0 || (iVar2 = FUN_0051d770(lVar3,&DAT_0093b500), iVar2 != 0)))))) {
    FUN_0051f000();
    FUN_0051ae30(lVar3);
    FUN_0051a5a0(lVar3);
    uVar4 = FUN_0051f050();
    return uVar4;
  }
  uVar4 = FUN_0051a5a0(lVar3);
  return uVar4;
}

