
int ENGINE_set_finish_function(ENGINE *e,ENGINE_GEN_INT_FUNC_PTR finish_f)

{
  *(ENGINE_GEN_INT_FUNC_PTR *)(e + 0x68) = finish_f;
  return 1;
}

