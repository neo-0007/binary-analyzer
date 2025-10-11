
undefined8 FUN_00597100(long param_1,uint *param_2,char *param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar4 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  *(uint *)(param_1 + 0x28) = uVar4;
  if (uVar1 < 3) {
    if (uVar1 != 0) {
      if (param_4 < (int)param_2[10]) {
        *(uint *)(param_1 + 0x28) = uVar4 | 1;
        FUN_0051f420();
        FUN_0051f540("../crypto/ui/ui_lib.c",0x374,"UI_set_result_ex");
        FUN_0051f8f0(0x28,0x65,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
        return 0xffffffff;
      }
      if ((int)param_2[0xb] < param_4) {
        *(uint *)(param_1 + 0x28) = uVar4 | 1;
        FUN_0051f420();
        FUN_0051f540("../crypto/ui/ui_lib.c",0x37c,"UI_set_result_ex");
        FUN_0051f8f0(0x28,100,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
        return 0xffffffff;
      }
      if (*(long *)(param_2 + 6) != 0) {
        lVar5 = (long)param_4;
        thunk_FUN_00713a50(*(long *)(param_2 + 6),param_3,lVar5);
        if (param_4 <= (int)param_2[0xb]) {
          *(undefined1 *)(*(long *)(param_2 + 6) + lVar5) = 0;
        }
        *(long *)(param_2 + 8) = lVar5;
        return 0;
      }
      FUN_0051f420();
      uVar7 = 900;
LAB_00597226:
      FUN_0051f540("../crypto/ui/ui_lib.c",uVar7,"UI_set_result_ex");
      FUN_0051f8f0(0x28,0x69,0);
      return 0xffffffff;
    }
  }
  else if (uVar1 == 3) {
    if (*(undefined1 **)(param_2 + 6) == (undefined1 *)0x0) {
      FUN_0051f420();
      uVar7 = 0x392;
      goto LAB_00597226;
    }
    **(undefined1 **)(param_2 + 6) = 0;
    cVar6 = *param_3;
    if (cVar6 != '\0') {
      puVar2 = *(undefined1 **)(param_2 + 0xc);
      do {
        lVar5 = thunk_FUN_00712710(puVar2,(int)cVar6);
        if (lVar5 != 0) {
          **(undefined1 **)(param_2 + 6) = *puVar2;
          return 0;
        }
        puVar3 = *(undefined1 **)(param_2 + 0xe);
        lVar5 = thunk_FUN_00712710(puVar3,(int)cVar6);
        if (lVar5 != 0) {
          **(undefined1 **)(param_2 + 6) = *puVar3;
          return 0;
        }
        cVar6 = param_3[1];
        param_3 = param_3 + 1;
      } while (cVar6 != '\0');
    }
  }
  return 0;
}

