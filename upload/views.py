from django.shortcuts import render, redirect
from .forms import fileForm
from .models import files
# Create your views here.
def home(request):
    file=files.objects.all()
    return render(request,'main.html',{'file':file})

def fileupload(request):
    if request.method == 'POST':
        form = fileForm(request.POST,request.FILES)
        if form.is_valid():
            form.save()
            return redirect('home')
    else:
        form = fileForm()
    return render(request, 'add.html', {'form': form} )