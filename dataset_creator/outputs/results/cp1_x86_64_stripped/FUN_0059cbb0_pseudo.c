
long FUN_0059cbb0(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  pcVar1 = (char *)FUN_004b21f0();
  if (pcVar1 != (char *)0x0) {
    lVar2 = thunk_FUN_007129d0(pcVar1);
    lVar2 = lVar2 + 3;
    lVar3 = FUN_0041ad90(lVar2,"../crypto/x509/v3_utl.c",0x93);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_utl.c",0x95,"bignum_to_string");
      FUN_0051f8f0(0x22,0xc0100,0);
      FUN_0041ad60(pcVar1,"../crypto/x509/v3_utl.c",0x96);
    }
    else {
      if (*pcVar1 == '-') {
        FUN_0041c470(lVar3,&DAT_0080b57c,lVar2);
        FUN_0041c4d0(lVar3,pcVar1 + 1,lVar2);
      }
      else {
        FUN_0041c470(lVar3,"0x",lVar2);
        FUN_0041c4d0(lVar3,pcVar1,lVar2);
      }
      FUN_0041ad60(pcVar1,"../crypto/x509/v3_utl.c",0xa2);
    }
    return lVar3;
  }
  return 0;
}

