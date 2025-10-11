
int dlclose(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = _dlerror_run(_dl_close,param_1);
  return -(uint)(iVar1 != 0);
}

