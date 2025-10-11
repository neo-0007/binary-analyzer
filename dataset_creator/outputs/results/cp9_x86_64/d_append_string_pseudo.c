
void d_append_string(long param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  
  sVar3 = strlen(param_2);
  if (sVar3 != 0) {
    pcVar1 = param_2 + sVar3;
    lVar4 = *(long *)(param_1 + 0x100);
    do {
      cVar2 = *param_2;
      if (lVar4 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar5 = 1;
        lVar4 = 0;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      param_2 = param_2 + 1;
      *(long *)(param_1 + 0x100) = lVar5;
      *(char *)(param_1 + lVar4) = cVar2;
      *(char *)(param_1 + 0x108) = cVar2;
      lVar4 = lVar5;
    } while (param_2 != pcVar1);
  }
  return;
}

