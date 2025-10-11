
long FUN_005c0c20(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_mem.c",0x5a,"BIO_new_mem_buf");
    FUN_0051f8f0(0x20,0xc0102,0);
    lVar5 = 0;
  }
  else {
    lVar6 = (long)param_2;
    if (param_2 < 0) {
      lVar6 = thunk_FUN_007129d0();
    }
    uVar4 = FUN_005c0c00();
    lVar5 = FUN_004ab550(uVar4);
    if (lVar5 != 0) {
      plVar1 = (long *)**(long **)(lVar5 + 0x40);
      plVar2 = (long *)(*(long **)(lVar5 + 0x40))[1];
      plVar1[1] = param_1;
      *plVar1 = lVar6;
      lVar3 = plVar1[1];
      plVar1[2] = lVar6;
      *plVar2 = *plVar1;
      plVar2[1] = lVar3;
      lVar6 = plVar1[3];
      plVar2[2] = plVar1[2];
      plVar2[3] = lVar6;
      *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | 0x200;
      *(undefined4 *)(lVar5 + 0x38) = 0;
    }
  }
  return lVar5;
}

