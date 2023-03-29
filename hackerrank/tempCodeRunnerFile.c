int result = 0;
  if(gender == 'b') {
    for(int i = 0; i < number_of_students; i += 2) {
      result += *(marks + i);
    }
  } else if (gender == 'g') {
    for(int i = 1; i < number_of_students; i += 2) {
      result += *(marks + i);
    }
  }
  return result;