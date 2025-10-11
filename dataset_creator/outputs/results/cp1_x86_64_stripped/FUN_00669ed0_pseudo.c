
long * FUN_00669ed0(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  
  plVar1 = param_1 + 0xd;
  cVar2 = FUN_006c3d30(plVar1);
  if (cVar2 == '\0') {
    FUN_006c3e40(plVar1,param_2,param_3,0x1b4);
    cVar2 = FUN_006c3d30(plVar1);
    if (cVar2 != '\0') {
      FUN_00665d40(param_1);
      *(uint *)(param_1 + 0xf) = param_3;
      *(undefined2 *)((long)param_1 + 0xa9) = 0;
      lVar3 = param_1[0x13];
      param_1[5] = 0;
      param_1[1] = lVar3;
      param_1[2] = lVar3;
      param_1[3] = lVar3;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0x84) = *(undefined8 *)((long)param_1 + 0x7c);
      *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x7c);
      if (((param_3 & 2) != 0) &&
         (lVar3 = (**(code **)(*param_1 + 0x20))(param_1,0,2,param_3), lVar3 == -1)) {
        FUN_006692f0(param_1);
        return (long *)0x0;
      }
      return param_1;
    }
  }
  return (long *)0x0;
}

