
void __deregister_frame(int *param_1)

{
  void *__ptr;
  
  if (*param_1 == 0) {
    return;
  }
  __ptr = (void *)__deregister_frame_info_bases();
  free(__ptr);
  return;
}

