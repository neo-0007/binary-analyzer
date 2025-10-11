
void add_name_to_object_isra_0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    sVar3 = strlen(param_2);
    pvVar4 = malloc(sVar3 + 0x19);
    if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("lastp != NULL","dl-load.c",0x1b6,"add_name_to_object");
    }
  }
  else {
    do {
      puVar5 = param_1;
      iVar1 = strcmp(param_2,(char *)*puVar5);
      if (iVar1 == 0) {
        return;
      }
      param_1 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
    sVar3 = strlen(param_2);
    puVar2 = (undefined8 *)malloc(sVar3 + 0x19);
    if (puVar2 != (undefined8 *)0x0) {
      pvVar4 = memcpy(puVar2 + 3,param_2,sVar3 + 1);
      puVar2[1] = 0;
      *puVar2 = pvVar4;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar5[1] = puVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _dl_signal_error(0xc,param_2,0,"cannot allocate name record");
}

