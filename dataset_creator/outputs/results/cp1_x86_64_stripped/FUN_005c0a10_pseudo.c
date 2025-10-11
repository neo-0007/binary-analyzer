
int FUN_005c0a10(long param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if ((*(byte *)(param_1 + 0x31) & 2) == 0) {
    FUN_004ab6c0(param_1,0xf);
    if (param_3 != 0) {
      if (param_2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bss_mem.c",0xe4,"mem_write");
        param_3 = -1;
        FUN_0051f8f0(0x20,0xc0102,0);
      }
      else {
        uVar2 = *(undefined8 *)plVar1[1];
        if (*(int *)(param_1 + 0x28) != 0) {
          FUN_005c06f0(*(undefined8 *)(param_1 + 0x40));
        }
        lVar5 = FUN_004c5190(*plVar1,(long)(param_3 + (int)uVar2));
        if (lVar5 == 0) {
          param_3 = -1;
        }
        else {
          thunk_FUN_00713a50((long)(int)uVar2 + *(long *)(*plVar1 + 8),param_2,(long)param_3);
          puVar3 = (undefined8 *)*plVar1;
          puVar4 = (undefined8 *)plVar1[1];
          uVar2 = puVar3[1];
          *puVar4 = *puVar3;
          puVar4[1] = uVar2;
          uVar2 = puVar3[3];
          puVar4[2] = puVar3[2];
          puVar4[3] = uVar2;
        }
      }
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_mem.c",0xdd,"mem_write");
    param_3 = -1;
    FUN_0051f8f0(0x20,0x7e,0);
  }
  return param_3;
}

